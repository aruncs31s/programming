def check_palindrome(word):
    word = word.lower()
    return word == word[::-1]


word = input("Enter W : ")

if check_palindrome(word):
    print("True")

else:
    print("False")
