class Person:
    def __init__(self, fname, lname):
        self.firstname = fname
        self.lastname = lname

    def printname(self):
        print(self.firstname, self.lastname)

    def printlength(self):
        print(len(self.firstname), len(self.lastname))

    def get_age(self, age1, age2):
        self.age = age1

    def print_age(self):
        print(f"John Age is {self.age}")


x = Person("John", "Doe")
x.printname()
x.get_age(22, 22)
x.print_age()


# Creating New Child Class


class Student(Person):
    pass


y = Student("Mike", "Olsen")
y.printname()
