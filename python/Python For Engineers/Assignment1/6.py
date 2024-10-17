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
