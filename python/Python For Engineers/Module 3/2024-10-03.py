"""
Date : 2024-10-03
Time : 13:21
"""

# class Person:
# class Student(Person):
#     def __init__(self,lname,year): # Called When creating the Object
#     super().__init__(lname) # Call the Parent's Constructor This will change for the parent constructor
#
"""Create a Person Class and create child class named Student and add graduation year for Parent class and create a clid class ??? """


class Person:
    def __init__(self, fname, lname):
        self.firstname = fname
        self.lastname = lname

    def printname(self):
        print(self.firstname, self.lastname)


Nivin = Person("Nivin", "Ravichandran")
# Nivin.printname()


class Student(Person):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname)
        self.graduationyear = year

    def printname(self):
        print(self.firstname, self.lastname, self.graduationyear)


Nivin_New = Student("Nivin", "Ravichandran", 2022)

# Nivin_New.printname()

print(Nivin_New.lastname)


class New_Gen_Z(Student):
    def __init__(self, fname, lname, year, age):
        super().__init__(fname, lname, year)
        self.age = age

    def printname(self):
        print(self.firstname, self.lastname, self.graduationyear, self.age)


Manual_New = New_Gen_Z("Manu", "Old", 2022, 22)

Manual_New.printname()
