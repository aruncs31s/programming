import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4 * np.pi, 1000)
y = np.sin(np.pi * x)

plt.plot(x, y, label="cos(x)")
y1 = 1j * np.sin(np.pi * x)
plt.plot(x, y1, label="icos(x)")
plt.legend()
plt.show()
