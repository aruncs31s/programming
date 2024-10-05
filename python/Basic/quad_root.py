import cmath


def root(a, b, c):
    d = (b**2) - (4 * a * c)
    root1 = (-b - cmath.sqrt(d)) / (2 * a)
    root2 = (-b + cmath.sqrt(d)) / (2 * a)
    return root1, root2

def fft

root1, root2 = root(1, 2, 3)
