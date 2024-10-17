"""
Write a Python code to create a function called “frequency” that takes a string and prints the letters in non-increasing order of the frequency of their occurrences. Use dictionaries.
"""

"""
Sources : 
https://www.geeksforgeeks.org/python-sort-python-dictionaries-by-key-or-value/
"""


def frequency(string_literal):
    frequency = {}
    for letter in string_literal:
        if letter in frequency:
            frequency[letter] += 1
        else:
            frequency[letter] = 1

    def sort(the_dict):
        new_dict = list(the_dict.keys())
        new_dict.sort()
        sorted_dict = {i: the_dict[i] for i in new_dict}
        return sorted_dict

    return sort(frequency)


string_literal = "hello"
print(frequency(string_literal))
