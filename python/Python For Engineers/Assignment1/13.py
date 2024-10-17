"""
13.Write a Python program to combine two dictionary adding values for common keys. d1 = {'a':10, 'b': 20, 'c':30} d2 = {'a': 30, 'b': 20, 'd':40} Sample output: {'a': 40, 'b': 40, 'd': 40, 'c': 30}.
"""

d1 = {"a": 10, "b": 20, "c": 30}
d2 = {"a": 30, "b": 20, "d": 40}


def add_dict(d1, d2):
    d3 = {}
    d3 = d1
    for key in d2:
        if not key in d3:
            d3[key] = d2[key]
        else:
            d3[key] += d2[key]
    return d3


if __name__ == "__main__":
    print(add_dict(d1, d2))
