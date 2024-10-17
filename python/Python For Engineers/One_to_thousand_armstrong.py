# print armstrong from 1 to 1000
# armstrong = sum of cubes of a given number is = the number itself
def armstrong(number):
    sum = 0
    while number != 0:
        a = number % 10
        sum = sum + (a**3)
        number = number // 10
    return sum


for i in range(1, 1000):
    if i == armstrong(i):
        print(i)
