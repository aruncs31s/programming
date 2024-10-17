"""
Plot the function tan x and cot x vs on the same plot with x going from -2pi to 2pi . Make sure the limit of the x-axis do not extend beyond the limits of the data . Plot tan x in red color and cot x in blue color and include a legend to label the two curves. Place legend within the plot and the right corner . Draw thin grey lines behind the curves, one horizontal at y = 0 and teh other vertical at x = 0
"""

import time

import matplotlib.pyplot as plt
import numpy as np


def get_seconds():
    return int(time.time())


PI = 3.14159265358979323
x = np.linspace(-2 * PI, 2 * PI, 100)
cot_y = np.cos(x)  # To get the cot x
tan_y = np.sin(x)
# plt.figure(1)
plt.plot(x, tan_y, "g", label="TAN")
# plt.figure(num=2)
plt.plot(x, cot_y, "r", label="COS")
plt.legend(loc="upper left", title="graphs")
plt.axhline(color="gray", zorder=-1)
plt.axvline(color="gray", zorder=-1)


plt.savefig(f"{get_seconds()}.png")
plt.show()
