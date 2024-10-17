s = "Hello"
print(s.center(30))  # centers the element or shifts the position
print(s.center(30, "*"))

print(s.isalpha())
s = " h h"
print(s.isalpha())
print(s.isdigit())
s = 5
print(str(s).isdigit())  # return if s is a digit

s = "Hi hi hi hi"
print(s.count("i"))  # counts number of 'i'
print(s.count("hi"))  # Count number of 'hi'

print(s.endswith("hi"))

print(s.find("Hi"))
a = "Hello "
b = "Sir"
c = [a, b]
print("*".join(c))

a = "HELLo"
print(a.lower())

a = "Hello"
print(a.replace("Hello", "hi"))
print(a.replace("hi", "hellow"))
