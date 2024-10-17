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
