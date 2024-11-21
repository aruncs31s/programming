"""
Write a python class named band account with details like Name of the depositor , account number , type of account and balance amount in the account . Write methods to assign the following
a) Initial Values to deposit,
b) Withdraw an amount after checking the balance and 
c) Display name, account number and balance 


"""


class bank_account:
    def __init__(self, name, acc_number, type, balance):
        self.holder_name = name
        self.acc_number = acc_number
        self.type = type
        self.balance = balance

    def get_initial_values(self, value):
        self.inital_deposite = value

    def withdraw(self, money):
        if self.balance - money > 0:
            self.balance - money
        print(f"Balance is {self.balance}")

    def set_balance(self, amount):
        self.balance -= amount


arun = bank_account("Arun", 1221212, "savings", 1000)

while True:
    print(
        f" Account Name: {arun.holder_name}\n Acc No: {arun.acc_number}\n Type: {arun.type}\n Balance: {arun.balance}"
    )
    the_input = input("Want to withdraw money? (y/n)")
    if the_input == "y":
        amount = int(input("Enter the amount to withdraw: "))
        arun.withdraw(amount)
        arun.set_balance(amount)
