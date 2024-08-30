# Reverse a number using function


def reverse(number):
    number = str(number)
    return str(number[::-1])


def fact(num):
    if num > 1:
        return fact(num - 1)
    else:
        return 1


print(reverse(123))
print(fact(123))
