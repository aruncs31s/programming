"""Create a class Student with atributes name and roll no. and a method dataprint() for displauing the same. Create two instance of the class and call the method for each instance of the class"""


class Student:
    def __init__(self, name, rollno):
        self.name = name
        self.roll_number = rollno

    def dataprint(self):
        print(f"Name  : {self.name} Roll No : {self.roll_number}")


n = Student("neh", 35)
meg = Student("meg", 32)

n.dataprint()
meg.dataprint()
