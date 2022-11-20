n = int(input("Enter the value of n: "))
sum = 1
i = 1 
j = 2
x = 1
if (n == 0) : 
    print("Sum of this series is 1")
    exit()
else :
    while (i <= n) :
        if j % 2 == 0 :
            k = -1
        else :
            k = 1 
        sum = sum + k*(x^j)/j 
        i = i +1
        j = j + 2

print("Sum of this series " ,sum,"x")
    
