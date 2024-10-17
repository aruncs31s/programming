import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4.0 * np.pi, 129)
y = np.sin(x)
plt.plot(x, y)
plt.show
