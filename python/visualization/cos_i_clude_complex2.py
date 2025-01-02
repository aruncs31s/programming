import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D

# Create x values
x = np.linspace(0, 4 * np.pi, 1000)

# Create two subplots: one 3D and one 2D
fig = plt.figure(figsize=(15, 6))

# 3D plot
ax1 = fig.add_subplot(121, projection="3d")
wave = np.sin(np.pi * x) + 1j * np.sin(np.pi * x)
ax1.plot(x, wave.real, wave.imag)
ax1.set_xlabel("Time")
ax1.set_ylabel("Real Part")
ax1.set_zlabel("Imaginary Part")
ax1.set_title("3D Complex Wave")

# 2D plot
ax2 = fig.add_subplot(122)
y = np.sin(np.pi * x)
y_complex = 1j * np.sin(np.pi * x)
ax2.plot(x, y, label="Re[sin(πx)]")
ax2.plot(x, y_complex.imag, label="Im[i*sin(πx)]")
ax2.set_xlabel("x")
ax2.set_ylabel("Amplitude")
ax2.set_title("Real and Imaginary Parts")
ax2.grid(True)
ax2.legend()

plt.tight_layout()
plt.show()
