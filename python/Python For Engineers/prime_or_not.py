# find out given number is prime or not
def prime_or_not(number):
    if number % 2 == 0:
        print("Number is not prime")
    else:
        for i in range(2, number // 2):
            status = 1
        if status == 1:
            print("Number is prime")


number = int(input("Enter a number"))
prime_or_not(number)
