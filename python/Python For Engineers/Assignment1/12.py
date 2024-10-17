"""
12.Create a dictionary of names and birthdays. Write a Python program that asksthe user to enter a name, and the program display the birthday of that person.
"""

new_dict = {
    "Arun": "22-10-2000",
    "Random Guy": "10-10-1990",
    "Guy From Feature": "10-10-3010",
}


def get_name():
    return input("Enter the name: ")


def print_bday(name):
    return new_dict[name]


def display_available():
    print(new_dict.keys())


if __name__ == "__main__":
    display_available()
    name = get_name()
    print(f"BirthDay is ", print_bday(name))
