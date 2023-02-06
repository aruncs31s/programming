#To generate random passwords
import random       #to generate random nos
passwd=''
inp=input("Do you need to generate password(y/n):")
if inp.lower()=='y':
    length=int(input("Enter the desired length:"))
    for i in range(length):
        x=random.randint(33,127)
        passwd+=chr(x)
    print("The Password is:\t",passwd)
elif inp.lower()=='n':
    print("Thank You!!")
    br
else:
    print("Invalid Input!!") 