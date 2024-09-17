first = [1, 2, 3, 4]
second = list(range(1, 5))
print(first)
print(" length is ", len(first))
# print single

for i in range(0, len(first)):
    print(first[i])

# print from 2 to 4 index

print(first[2:4])

# combine 2 list

third = [20, 30, 40, 50, 60, 70]

first = [1, 2, 3]
second = [4, 5, 6]
third = first + second

print(third)
print(third == list(range(1, 7)))
