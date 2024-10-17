# Find Largest among 2 numbers
def is_large(num_1, num_2):
    if num_1 > num_2:
        return True
    else:
        return False


num_1 = int(input("Enter the first Number"))
num_2 = int(input("Enter the second Number"))
print(
    "The Bigger Number is ",
    is_large(num_1, num_2) and num_1 or is_large(num_2, num_1) and num_2,
)
