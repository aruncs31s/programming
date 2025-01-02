from cProfile import label

import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4 * np.pi, 1000)
y = np.cos(np.pi * x)
plt.plot(x, y, label="cos(x)")
y1 = y**2
plt.plot(x, y1, label="cos2(x)")
plt.legend()
plt.show()
