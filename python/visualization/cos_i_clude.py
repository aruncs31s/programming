import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 4 * np.pi, 1000)
# Create a complex wave
y = np.sin(np.pi * x)
y_complex = 1j * np.sin(np.pi * x)

# Plot real and imaginary parts
plt.figure(figsize=(10, 6))
plt.plot(x, y, label="Re[cos(πx)]")
plt.plot(x, y_complex.imag, label="Im[i*cos(πx)]")  # Use .imag to get imaginary part
plt.xlabel("x")
plt.ylabel("Amplitude")
plt.title("Real and Imaginary Parts of Complex Wave")
plt.grid(True)
plt.legend()
plt.show()
