# AE 7th Update Budgest Calculator

print("Welcome user this is your Financial Calculator")

print("Please enter your monthly costs:")

def money(income):
    income = int(input("Monthly Income\n"))
    rent = int(input("Rent/Morgage\n"))
    utilities = int(input("Utilities\n"))
    groceries = int(input("Groceries\n"))
    transportaion = int(input("Transportation\n"))

    rent_per = round(rent/income*100,2)
    util_per = round(utilities/income*100,2)
    gro_per = round(groceries/income*100,2)
    trans_per = round(transportaion/income*100,2)
    total = income - (rent + utilities + groceries + transportaion)



print("Your rent is $", rent, "which is", per_rent, "% of your income!")
print("Your rent is $", utilities, "which is", per_util, "% of your income!")
print("Your rent is $", groceries, "which is", per_gro, "% of your income!")
print("Your rent is $", transportaion, "which is", per_trans, "% of your income!")
print("You have $", total, "of spending each month")

money()