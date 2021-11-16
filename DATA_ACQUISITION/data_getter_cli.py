import subprocess
import sys
from time import sleep
from datetime import date, datetime
import random
import logging

import argparse
import time
import numpy as np
import pandas as pd

import brainflow
from brainflow.board_shim import BoardShim, BrainFlowInputParams, LogLevels, BoardIds
from brainflow.data_filter import DataFilter, FilterTypes, AggOperations, WindowFunctions, DetrendOperations

# todo, argparse opcióval lehetővé tenni hogy lehessen mind meditációs, mind irányítási, mind villany fel-le adatokat felvenni vele.
def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--in_filename', type=str, help='name of curren session file', required=True, default='')
    parser.add_argument('--board_id', type=int, help='board id, check docs to get a list of supported boards', required=True, default=BoardIds.CYTON_DAISY_BOARD)
    args = parser.parse_args()



    direction_list = ['left', 'right', 'stop', 'forward', 'chakra']
    light_list = ['on', 'off', 'chakra']

    number_list = ['0', '1', '2']
    file_naming_convention = args.in_filename + datetime.now().strftime('%m_%d_%H')

    exg_channels = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]

    BoardShim.enable_dev_board_logger()
    logging.basicConfig(level=logging.DEBUG)

    # initializing
    params = BrainFlowInputParams()
    params.serial_port = '/dev/ttyUSB0'
    board = BoardShim( args.board_id, params) # Cyton Daisy, using /dev/ttyUSB0 serial port
    board.prepare_session()
    print(board.get_timestamp_channel(args.board_id))

    for i in range(5, 0 ,-1):
        time.sleep(1)
        print(f"{i}...")

    # one picture is shown for 4.8 seconds, so multing that by 200 means ~600s, or around 10 minutes, tho 10 minutes is tiresome
    # for test purposes it stays 5
    try:
        for i in range(10):
            start = time.process_time()
            direction = random.choice(direction_list)
            file_number = random.choice(number_list)

            if (direction) == 'chakra':
                filename = f"./images/chakra.jpeg"
            else:
                filename = f"./images/{direction}_{file_number}.jpeg"

            p = subprocess.Popen(['python3', '/home/nexuscore/EGYETEM/DIPLOMAMUNKA/DATA_ACQUISITION/image_opener_subproc.py', '--path', filename])
            try:
                tmp = board.get_board_data()
            except:
                print("exceptio occurred")
                pass
            for i in range(8):
                board.start_stream(65, None)
                sleep(0.685)
                # while( not (board.get_board_data_count() == 128)):
                #     pass
                data = board.get_board_data()
                board.stop_stream()
                ## data filtering takes place here 
                # for count, channel in enumerate(exg_channels):
                    # plot timeseries
                    # print(len(data[channel]))
                    # DataFilter.detrend(data[channel], DetrendOperations.CONSTANT.value)
                    # DataFilter.perform_bandpass(data[channel], 125, 50.0, 100.0, 2, FilterTypes.BUTTERWORTH.value, 0)
                    # DataFilter.perform_bandstop(data[channel], self.sampling_rate, 60.0, 4.0, 2, FilterTypes.BUTTERWORTH.value, 0)
                    
                    
                    
                    # DataFilter.perform_wavelet_denoising(data[channel], 'sym10', 2)
                    
                data[-4, :] = direction_list.index(direction)
                print(data[0:17 , :])
                print(data.shape)
                if(data.shape[1] == 64):
                    DataFilter.write_file(data, f'{file_naming_convention}.txt', 'a')
                print(f'time for processing one picture: {time.process_time() - start}')
                print(f'direction_list.index(direction) : {direction_list.index(direction)}')
            p.kill()
            try:
                tmp = board.get_board_data()
            except:
                print("exceptio occurred")
                pass
    except KeyboardInterrupt:
        print(f'Program terminated via ctrl-c')
        board.release_session()
        sys.exit(0)
        
    board.release_session()

if __name__ == "__main__":
    main()