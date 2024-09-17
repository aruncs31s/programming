word = int(input("Enter number "))
if word == int((str(word))[::-1]):
    print("Number is palindrome")
else:
    print("Number not palindrome")
