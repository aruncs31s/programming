"""
11.Write a Python program to count how many times each character appears in a given string and store the count in a dictionary with key as the character.
"""

count_dict = {}


def check_count(char):
    if char in count_dict:
        count_dict[char] += 1
    else:
        count_dict[char] = 1


if __name__ == "__main__":
    string = input("Enter a string: ")
    for char in string:
        check_count(char)
    print(count_dict)
