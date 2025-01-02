import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4 * np.pi, 1000)
y = np.cos(x + np.pi / 4)
y2 = np.cos(x) * np.cos(np.pi / 4) - np.sin(x) * np.sin(np.pi / 4)
plt.plot(x, y, "b-", label="cos(x + π/4)")
plt.plot(x, y2, "r--", label="cos(x)cos(π/4) + sin(x)sin(π/4)")
plt.legend()
plt.grid(True)
plt.show()
