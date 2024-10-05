"""Write a python class named Rectangle contructed by a length and width and method which will compute the area of Rectangle"""


class Rectangle:
    def __init__(self, length, width):
        self.lenght = length
        self.width = width

    def area(self):
        return self.lenght * self.width


new_ewctangle = Rectangle(12, 10)

print("area = ", new_ewctangle.area())
