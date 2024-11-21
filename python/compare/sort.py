the_list = [7, 9, 5, 2, 3]
x = 1
for i in range(0, len(the_list) - 1):
    # first 7 , 9
    if the_list[i] > the_list[i + 1]:
        continue
    else:
        for j in range(i+1,len(the_list) -(i+1)):

        x += 1

def 
print(x)
