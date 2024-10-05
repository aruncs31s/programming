# Replace the values 56 with 92
# Print value 8
# Remove the value 52 from list
num = [24, [26, 52], 2, [8, 3], 56]


def replace():

    num[4] = 92


def print_value_8():
    print(num[3][0])


def remove_52():
    # TODO:
    num.remove(1, 52)


if __name__ == "__main__":
    print("Before Replace", num)
    replace()

    print("After Replace", num)
    print("Value 8 is ", print_value_8())

    remove_52()
    print("After Removing 52", num)
