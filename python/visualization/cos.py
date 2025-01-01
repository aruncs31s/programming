import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4 * np.pi, 1000)
y = np.cos(x + np.pi / 4)
y2 = np.cos(x) * np.cos(np.pi / 4) - np.sin(x) * np.sin(np.pi / 4)
y3 = np.cos(x) - np.sin(x)
y4 = np.sin(x) * np.sin(np.pi / 4)
y5 = np.cos(x) * np.cos(np.pi / 4)
plt.plot(x, y, "b-", label="cos(x + π/4)")
plt.plot(x, y3, "g-", label="cos(x) - sin(x)")
plt.plot(x, y2, "r--", label="cos(x)cos(π/4) + sin(x)sin(π/4)")
plt.plot(x, y4, "y--", label=" sin(x) sin(π/4)")
plt.plot(x, y5, "m--", label="cos(x) cos(π/4)")
plt.legend()
plt.grid(True)
plt.show()
