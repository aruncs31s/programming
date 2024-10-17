"""
10.Write Python program to check for the presence of a key in the dictionary and find the sum of all values in the dictionary.
"""


def is_present(the_dict, key):
    if key in the_dict:
        return True
    else:
        return False


def sum(the_dict):
    sum = 0
    for key in the_dict:
        sum += the_dict[key]
    return sum


sample_dict = {"a": 1, "aa": 2, "aaa": 3, "aaaa": 4}

print(is_present(sample_dict, "a"))
print(sum(sample_dict))
