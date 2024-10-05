"""Write a program that validate the name and age as entered by user to determine whether the person can cast a vote or not"""


class Vote:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def validate(self):
        if self.age >= 18:
            print(f"{self.name} can cast a vote")
        else:
            print(f"{self.name} cannot cast a vote")


x = Vote("Kingsley", 20)
x.validate()
