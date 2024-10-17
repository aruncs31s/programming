# check whether armstron or not
# armstrong = sum of cubes of a given number is = the number itself
def armstrong(number):
    sum = 0
    while number != 0:
        a = number % 10
        sum = sum + (a**3)
        number = number // 10
    return sum


number = int(input("Enter a number"))
if number == armstrong(number):
    print("Number is armstrong")
else:
    print("Number is not armstrong")
