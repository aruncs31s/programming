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
"""
12.Create a dictionary of names and birthdays. Write a Python program that asksthe user to enter a name, and the program display the birthday of that person.
"""

new_dict = {
    "Arun": "22-10-2000",
    "Random Guy": "10-10-1990",
    "Guy From Feature": "10-10-3010",
}


def get_name():
    return input("Enter the name: ")


def print_bday(name):
    return new_dict[name]


def display_available():
    print(new_dict.keys())


if __name__ == "__main__":
    display_available()
    name = get_name()
    print(f"BirthDay is ", print_bday(name))
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
"""
Let num=[14,[26,52],2,[8,3],56]. Write the expressions for following operations in
Python:
i) Replace the value 56 with 92
ii) Print the value 8.
iii) Remove the value 52 from list
"""

num = [24, [26, 52], 2, [8, 3], 56]


def replace():

    num[4] = 92


def print_value_8():
    print(num[3][0])


def remove_52():
    num[1].remove(52)


if __name__ == "__main__":
    print("Before Replace", num)
    replace()
    print("After Replace", num)
    print("Value 8 is ", print_value_8())
    remove_52()
    print("After Removing 52", num)
# 2. Illustrate the use of negative indexing


def reverse(string):
    return string[::-1]


if __name__ == "__main__":
    print(reverse("Hello, World!"))
# Create a  function min_max() that takes n numbers as list argument and return the smallest and largest numbers

the_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


def min_max(the_list):
    return min(the_list), max(the_list)


print(min_max(the_list))
"""Write a Python program to read n integers into a list and separate the positive and negative numbers into two different lists"""

new_list = []
postive_list = []
negative_list = []


def read_list(n):
    while n > 0:
        new_list.append(int(input("Enter the elements ")))
        n -= 1
    sort(new_list)


def sort(new_list):
    for i in new_list:
        if i > 0:
            postive_list.append(i)
        else:
            negative_list.append(i)
    print("Postive List", postive_list)
    print("Negative List", negative_list)


read_list(int(input("Enter the number of elements ")))
"""
Write a Python program to find the largest and second largest of n numbers in a list. Assume n>=3 and all the numbers are distinct.
"""

_sorted_list = []


def find_largests(new_list):
    if len(new_list):
        for i in new_list:
            if max(new_list):
                _sorted_list.append(max(new_list))
                new_list.remove(max(new_list))
                find_largests(new_list)


if __name__ == "__main__":
    the_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    find_largests(the_list)
    print(f"Largest: {_sorted_list[0]} Second largest: {_sorted_list[1]}")
"""
Write a Python program to create a set of functions that compute the mean, median and mode of a set of numbers. Each function should expect a list of numbers as an argument and return a single number. Each function should return 0 if the list is empty. Include a main function that tests the three functions with a given list. ( Hint: Mean: Mean is the average value of a list of numbers. Median: If the number of values in a list is odd, the median of the list is the value at the midpoint when the set of numbers is sorted; otherwise, the median is the average of the two values surrounding the midpoint. Mode: The r node of a list of values is the value that occurs most frequently).
"""

"""Sources
1. https://www.investopedia.com/terms/m/median.asp  # Mean Median
2. https://stackoverflow.com/questions/152580/whats-the-canonical-way-to-check-for-type-in-python # Type Checking
"""


def sort(number, type):
    # sorted = []
    n = len(number)
    if type == "asc":
        while n > 0:
            for i in range(1, len(number)):
                if (number[i - 1] - number[i]) < 0:
                    continue
                else:
                    number[i - 1] ^= number[i]
                    number[i] = number[i - 1] ^ number[i]
                    number[i - 1] ^= number[i]
            n -= 1
        return number
    if type == "des":
        while n > 0:
            for i in range(1, len(number)):
                if (number[i - 1] - number[i]) < 0:
                    number[i - 1] ^= number[i]
                    number[i] = number[i - 1] ^ number[i]
                    number[i - 1] ^= number[i]
                else:

                    continue
            n -= 1
        return number


def mean(numbers):
    if len(numbers) == 0:
        return 0
    sum = 0
    for i in numbers:
        sum += i
    return sum / len(numbers)


def median(numbers):
    if len(numbers) == 0:
        return 0
    else:
        length = len(numbers)
    if length % 2 == 0:
        return (numbers[length // 2] + numbers[length // 2 - 1]) / 2
    else:
        return numbers[length // 2]


numbers = [11, 22, 3, 4, 55, 6, 7, 55, 44, 3, 34, 5, 33]

print(mean(numbers))
print(median(numbers))
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
"""
Let p ={'a':10,'b':20} be a dictionary. Write commands to
a) Add a new key value pair('c':30)
b) Update the value correspond to the key 'a' to I00
c) Remove the entry corresponds to the key 'b'
"""

p = {"a": 10, "b": 20}
# a)

p["c"] = 30

# b)

p["a"] = 100

# c)

p.pop("b")
# del p["b"]

print(p)
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
