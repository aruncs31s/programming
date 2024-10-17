def sum_of_digits(n):
    sum = 0
    while n != 0:
        a = n % 10
        sum = sum + a
        n = n // 10
    return sum


print(sum_of_digits(190))
