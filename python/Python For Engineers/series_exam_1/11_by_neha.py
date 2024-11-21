import numpy as np
import matplotlib.pyplot as plt

# Create the x values from 0 to 10
x = np.linspace(0.1, 10, 100)  # Start from 0.1 to avoid division by zero for sin(x)/x

# Calculate y values for each function
y1 = np.sin(x) / x
y2 = np.sin(x)

# Create a figure with subplots
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(8, 6))  # 2 rows, 1 column

# Plot sin(x)/x on the first subplot
ax1.plot(x, y1, label=r"$\frac{\sin(x)}{x}$", color="b")
ax1.set_title(r"Plot of $\frac{\sin(x)}{x}$")
ax1.set_xlabel("x")
ax1.set_ylabel(r"$\frac{\sin(x)}{x}$")
ax1.grid(True)
ax1.legend()

# Plot sin(x) on the second subplot
ax2.plot(x, y2, label=r"$\sin(x)$", color="g")
ax2.set_title("Plot of sin(x)")
ax2.set_xlabel("x")
ax2.set_ylabel(r"$\sin(x)$")
ax2.grid(True)
ax2.legend()

# Adjust layout to avoid overlapping of subplots
plt.tight_layout()

# Display the plot
plt.show()
