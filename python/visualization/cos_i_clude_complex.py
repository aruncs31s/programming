from mpl_toolkits.mplot3d import Axes3D

fig = plt.figure(figsize=(10, 8))
ax = fig.add_subplot(111, projection="3d")

wave = np.cos(np.pi * x) + 1j * np.cos(np.pi * x)
ax.plot(x, wave.real, wave.imag)
ax.set_xlabel("Time")
ax.set_ylabel("Real Part")
ax.set_zlabel("Imaginary Part")
plt.title("3D Complex Wave")
plt.show()
