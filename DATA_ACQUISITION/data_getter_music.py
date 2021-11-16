import subprocess
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
    args = parser.parse_args()
    file_naming_convention = args.in_filename + datetime.now().strftime('%m_%d_%H')
    BoardShim.enable_dev_board_logger()

    for i in range(5, 0 ,-1):
        time.sleep(1)
        print(f"{i}...")

    # initializing
    params = BrainFlowInputParams()
    params.serial_port = '/dev/ttyUSB0'
    board = BoardShim(2, params) # Cyton Daisy, using /dev/ttyUSB0 serial port
    board.prepare_session()



    # music maker 
    for i in range(200):
        board.start_stream(513, None)
        sleep(4.5)
        data = board.get_board_data()
        board.stop_stream()
        if(data.shape[1] == 512):
            DataFilter.write_file(data, f'{file_naming_convention}.txt', 'a')
    
    board.release_session()

if __name__ == "__main__":
    main()