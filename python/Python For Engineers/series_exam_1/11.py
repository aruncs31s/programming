"""
Plot the function sin(x)/x vs. x with x[0 to 10].Make sure the limits of the x-axis do not extend beyond the limits of the data. Plot sin x with multiple plots laid out in the same window.
"""

import matplotlib.pyplot as plt
import numpy as np

x = np.arange(0.1, 10, 0.01)


sin_x = np.sin(x)
sin_x_over_x = sin_x / x

plt.plot(x, sin_x_over_x, label="sin(x)/x")
plt.plot(x, sin_x, label="sin(x)")
plt.xlim([0, 10])
plt.legend()
plt.show()
