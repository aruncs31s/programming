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
