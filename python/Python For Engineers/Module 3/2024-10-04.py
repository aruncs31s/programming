"""
- Date : 2024-10-05
- Time : 13:08
"""

# Polymosphism


#  FIX: Me
class Shape:
    def __init__(self, name):
        self.name = name

    def fact(self):
        return "Squares have each angle equal to 90 degrees"

    def __str__(self):
        return self.name


class Square(Shape):
    def __init__(self, length):
        super().__init__(length)

    def area(
        self,
    ):  # Same function name as in the Shape class but both are new class which's parents are same
        return self.length**2

    def fact(self):
        return "Squares have each angle equal to 90 degrees"


class Circle(Shape):
    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius

    def area(
        self,
    ):  # Same function name as in the Shape class but both are new class which's parents are same
        return 3.14 * self.radius**2


a = Square(4)
b = Circle(7)

print(b)  # calls str in the b obejct , Circle have str from the shape
print(
    b.fact()
)  # calls circle objects fact which is inherited from Shape <type neovim gd>
print(a.fact())  # calls square object's fact
print(b.area())  # called area from the latest definition or override
