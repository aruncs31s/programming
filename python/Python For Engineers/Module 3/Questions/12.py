"""Create a class Person with attributes name , age ,salary . Define a method getdetails() to assign values to the attributes and a method display() for showing the details. Create and instance of the class and call the methods"""


class Person:
    def __init__(self, name="", age=0, salary=0):
        self.name, self.age, self.salary = name, age, salaryddddd

    def get_details(self, name, age, salary):

        self.name, self.age, self.salary = name, age, salary

    def display(self):
        print(f"Name {self.name} Age : {self.age} Salary : {self.salary}")


person1 = Person("", 0, 0)
person1.get_details("HI", 22, 20000)
person1.display()


### Method 2
class Person:

    def get_details(self, name, age, salary):

        self.name, self.age, self.salary = name, age, salary

    def display(self):
        print(f"Name {self.name} Age : {self.age} Salary : {self.salary}")


person1 = Person()
person1.get_details("HI", 22, 20000)
person1.display()
