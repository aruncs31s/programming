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
