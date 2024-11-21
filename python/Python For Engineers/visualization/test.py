import matplotlib.pyplot as plt
import numpy as np

values = [7, 8, 9, 7, 6, 5, 4, 5]

xvalues = [500, 600, 700, 800, 900, 1000, 1100, 1200]
eqn_value = np.sin(xvalues)
plt.plot(xvalues, eqn_value)
plt.show()
