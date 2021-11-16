# WS client example

import asyncio
import websockets
import numpy as np
from pickle import dumps, loads

import logging

import argparse
import time

from time import sleep
from datetime import datetime

from brainflow.board_shim import BoardShim, BrainFlowInputParams
from brainflow.data_filter import DataFilter, FilterTypes, DetrendOperations, NoiseTypes


from sklearn.preprocessing import RobustScaler

tudat_list = ['music', 'meditation', 'attention']
parser = argparse.ArgumentParser()
parser.add_argument('--in_filename', type=str, help='name of current session file', required=True)
parser.add_argument('--session_type', type=str, help='type of the current session, options:\n\r meditation, music, attention\n', required=True)
args = parser.parse_args()

file_naming_convention = args.in_filename + datetime.now().strftime('%m_%d_%H')

BoardShim.enable_dev_board_logger()
logging.basicConfig(level=logging.DEBUG)

total_number = 0
good_number = 0

# initializing
params = BrainFlowInputParams()
params.serial_port = '/dev/ttyUSB0'
board = BoardShim( 2, params) # Cyton Daisy, using /dev/ttyUSB0 serial port
board.prepare_session()
print(board.get_timestamp_channel(2))

for i in range(5, 0 ,-1):
    time.sleep(1)
    print(f"{i}...")


async def hello():
    uri = "ws://192.168.1.110:8765"
    async with websockets.connect(uri) as websocket:

        start_time = time.time()
        
        board.start_stream(513, None)
        sleep(4.685)
        data = board.get_board_data()
        board.stop_stream()
        
        if(data.shape[1] == 512):

            data[-4, :] = tudat_list.index(args.session_type)
            DataFilter.write_file(data, f'{file_naming_convention}.txt', 'a')

            global total_number
            total_number += 1

            print(f'data.shape is 512')
            for i in range(1, 17):
                DataFilter.detrend(data[i], DetrendOperations.CONSTANT.value)

            for i in range(1, 17):
                DataFilter.remove_environmental_noise(data[i], 125, NoiseTypes.FIFTY.value)
                DataFilter.perform_wavelet_denoising(data[i], 'haar', 2)
                DataFilter.perform_highpass(data[i], 125, 3.0, 4, FilterTypes.BUTTERWORTH.value, 0)
                data[i] = RobustScaler(quantile_range=(25, 75), copy="False").fit_transform((data[i]).reshape(-1, 1)).reshape(-1)

            X_inference = data[1:17]

            X_inference = np.transpose(X_inference)

            X_inference = np.resize(X_inference, (1, 512, 16, 1))

            buffer_matrix = dumps(X_inference)

            await websocket.send(buffer_matrix)

            pred_class = await websocket.recv()
            
            pred_class = int(pred_class)

            pred_class_name = tudat_list[pred_class]

            print(f'predicted class name: {pred_class_name}')

            if(pred_class_name == args.session_type):
                global good_number
                good_number += 1

            end_time = time.time()

            print("total time taken this loop: ", end_time - start_time - 4.685)
            print(f'good predictions / total predictions in percentage: {(good_number / total_number) * 100}')
            print(f'total_number , good_number : {total_number} , {good_number}')

        elif(data.shape[1] < 512):
            pass
        

for i in range(60):
    asyncio.get_event_loop().run_until_complete(hello())