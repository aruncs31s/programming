"""
Write a Python program to find the frequency of each word in a string using a
dictionary.
"""


def frequency(string_literal):
    frequency = {}
    for letter in string_literal:
        if letter in frequency:
            frequency[letter] += 1
        else:
            frequency[letter] = 1
    return frequency


word = "hello"

if __name__ == "__main__":
    print(frequency(word))
