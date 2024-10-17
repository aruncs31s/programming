"""
Let p ={'a':10,'b':20} be a dictionary. Write commands to
a) Add a new key value pair('c':30)
b) Update the value correspond to the key 'a' to I00
c) Remove the entry corresponds to the key 'b'
"""

p = {"a": 10, "b": 20}
# a)

p["c"] = 30

# b)

p["a"] = 100

# c)

p.pop("b")
# del p["b"]

print(p)
