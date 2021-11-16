from  matplotlib import rcParams
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import argparse
import time

start = time.process_time()
dpi = rcParams['figure.dpi']

parser = argparse.ArgumentParser()
parser.add_argument('--path', type=str, required=True, default=None)
args = parser.parse_args()

img = mpimg.imread(args.path)
height, width, depth = img.shape
figsize = width / float(dpi), height / float(dpi)
plt.figure(figsize=figsize)
mngr = plt.get_current_fig_manager()
mngr.window.setGeometry(450, 500, 1200, 1000)
imgplot = plt.imshow(img)
plt.show()
print(f'plt time: {time.process_time() - start}')