n = int(input("Enter the value of n: "))
sum = 1
i = 2 
j = 2
x = 1
if (n == 1) : 
    print("Sum of this series is 1")
    exit()
else :
    while (i <= n) :
        if i % 2 == 0 :
            k = -1
        else :
            k = 1 
        sum = sum + k*(x**j)/j 
        i = i +1
        j = j + 2

print("Sum of this series " ,sum,"x")
   print
