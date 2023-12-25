import numpy as np

x = [1, 2, 3]
y = np.fft.fft(x)
print(y)


xn = int(input("Enter a Sequence"))
Xn = np.fft(xn)


print("Dft of xn = " + Xn)
