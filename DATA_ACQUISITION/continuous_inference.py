import subprocess
from time import sleep
from datetime import date, datetime
import random
import logging

import argparse
import time
import numpy as np
import pandas as pd
import sys
from serial import Serial


import brainflow
from brainflow.board_shim import BoardShim, BrainFlowInputParams, LogLevels, BoardIds
from brainflow.data_filter import DataFilter, FilterTypes, AggOperations, WindowFunctions, DetrendOperations, NoiseTypes

import tensorflow as tf

from sklearn.preprocessing import RobustScaler

def main():
    direction_list = ['left', 'right', 'stop', 'forward', 'chakra']
    parser = argparse.ArgumentParser()
    args = parser.parse_args()

    BoardShim.enable_dev_board_logger()
    logging.basicConfig(level=logging.DEBUG)

    # initializing
    params = BrainFlowInputParams()
    params.serial_port = '/dev/ttyUSB0'
    board = BoardShim( 2, params) # Cyton Daisy, using /dev/ttyUSB0 serial port
    board.prepare_session()
    print(board.get_timestamp_channel(2))
    model = tf.keras.models.load_model('models/test_clench_model_64BUFSIZE_0_645_accuracy')
    ser = Serial()
    ser.baudrate = 115200
    ser.port = '/dev/ttyUSB1'
    ser.open()

    for i in range(5, 0 ,-1):
        time.sleep(1)
        print(f"{i}...")

    # one picture is shown for 3 seconds, so multing that by 200 means ~600s, or around 10 minutes, tho 10 minutes is tiresome
    # for test purposes it stays 5
    try:
        while( True ):
            start = time.process_time()
            
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
                
            if(data.shape[1] == 64):
                for i in range(1, 17):
                # print(f'rc_control_test.shape : {rc_control_test[i].shape}')
                    DataFilter.detrend(data[i], DetrendOperations.CONSTANT.value)

                for i in range(1, 17):
                    # print(f'rc_control_test.shape : {rc_control_test[i].shape}')
                    DataFilter.remove_environmental_noise(data[i], 64, NoiseTypes.FIFTY.value)
                    DataFilter.perform_wavelet_denoising(data[i], 'haar', 2)
                    DataFilter.perform_highpass(data[i], 64, 3.0, 4, FilterTypes.BUTTERWORTH.value, 0)
                    data[i] = RobustScaler(quantile_range=(25, 75), copy="False").fit_transform((data[i]).reshape(-1, 1)).reshape(-1)

            X_inference = data[1:17]

            X_inference = np.transpose(X_inference)

            X_inference = np.resize(X_inference, (1, 64, 16, 1))

            y_pred = model.predict(X_inference)
            
            pred_class = np.argmax(y_pred)

            pred_class_name = direction_list[pred_class]

            print(f'predicted class name: {pred_class_name}')

            if(pred_class_name == 'left'):
                print(f'in the if case, dir: {pred_class_name}')
                # ser.write(bytes(76))
                # ser.write(bytes(84))
                ser.write(bytes('L', 'utf-8'))
                ser.write(bytes('T', 'utf-8'))
            elif(pred_class_name == 'right'):
                print(f'in the if case, dir: {pred_class_name}')
                # ser.write(bytes(82))
                # ser.write(bytes(84))
                ser.write(bytes('R', 'utf-8'))
                ser.write(bytes('T', 'utf-8'))
            elif(pred_class_name == 'forward'):
                print(f'in the if case, dir: {pred_class_name}')
                # ser.write(bytes(70))
                # ser.write(bytes(87))
                ser.write(bytes('F', 'utf-8'))
                ser.write(bytes('W', 'utf-8'))
            elif(pred_class_name == 'stop'):
                print(f'in the if case, dir: {pred_class_name}')
                # ser.write(bytes(88))
                # ser.write(bytes(90))
                ser.write(bytes('X', 'utf-8'))
                ser.write(bytes('Z', 'utf-8'))
            elif(pred_class_name == 'chakra'):
                print(f'in the if case, dir: {pred_class_name}')
                # ser.write(bytes(77))
                # ser.write(bytes(68))
                ser.write(bytes('M', 'utf-8'))
                ser.write(bytes('D', 'utf-8'))
            '''
            try:
                tmp = board.get_board_data()
            except:
                print("exceptio occurred")
                pass
            '''
    except KeyboardInterrupt:
        print(f'Program terminated via ctrl-c')
        board.release_session()
        sys.exit(0)
       
    

if __name__ == "__main__":
    main()