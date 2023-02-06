'''A Calculator to take 2 numbers as input and 
do basic functions like addition,subtraction,multiplication,division'''
def sum(a,b):           #to add
    s=a+b
    print(s)
def product(a,b):       #to subtact
    p=a*b
    print(p)
def divison(a,b):       #to divide
    d=a/b
    print(d)
def subtract(a,b):      #to multiply
    sub=a-b
    print(sub)
print(100*"-")
print("\t\t\tCALCULATOR\t\t\t")
print(100*"-")
print("1.ADDITION")
print("2.SUBTRACTION")
print("3.MULTIPLICATION")
print("4.DIVISION")
print("5.EXIT")
print(100*"-")
while True:
    ch=int(input("Enter Your Choice:"))
    if ch<5:
        a=int(input("Enter a number:"))
        b=int(input("Enter a number:"))
        if ch==1:
            sum(a,b)
        elif ch==2:
            subtract(a,b)
        elif ch==3:
            product(a,b)
        elif ch==4:
            divison(a, b)
    elif ch==5:
        print("Thank You!!!")
        exit()
    else:
        print("Invalid Input!!")

