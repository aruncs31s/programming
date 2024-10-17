"""
14.Write a Python script to print a dictionary where the keys are numbers between 1 and 15 (both included) and the values are square of keys.
"""

the_range = 16


def create_new_dict():
    new_dict = {}
    for i in range(1, the_range):
        new_dict[i] = i**2
    return new_dict


if __name__ == "__main__":
    print(create_new_dict())
