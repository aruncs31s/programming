from cProfile import label

import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4 * np.pi, 1000)
y = np.cos(x - np.pi / 2)
y1 = np.sin(x)


plt.plot(x, y, label="cos(x)")
plt.plot(x, y1, label="sin(x)")
plt.legend()
plt.show()
