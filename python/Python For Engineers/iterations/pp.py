# write a python program to print all the factors of number if 6 -> 2,3,6
def factorize(n):
    for i in range(1,int((n+1)*.5)):
        if (n%i)==0:
            print(i)
    print(n)
n=int(input("Enter the number "))
factorize(n)
