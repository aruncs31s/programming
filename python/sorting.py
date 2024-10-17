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


# void swap(int *a, int *b) {
#   *a = *a ^ *b;
#   *b = *a ^ *b;
#   *a = *a ^ *b;
# }

numbers = [2, 4, 5, 1, 3, 10, 9, 6]
print(sort(numbers, "des"))
