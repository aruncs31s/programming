def febu(number):
    if number == 1:
        return 1
    else:
        febu(number - 1)


print(febu(2))
