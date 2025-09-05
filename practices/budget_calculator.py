# AE 7th Budget Calculator

print("Welcome user this is your Financial Calculator")

print("Please enter the nessasary costs:")
income = int(input("Monthly Income\n"))
rent = int(input("Rent/Morgage\n"))
utilities = int(input("Utilities\n"))
groceries = int(input("Groceries\n"))
transportaion = int(input("Transportation\n"))

spend = income - (rent + utilities + groceries + transportaion)
percent_rent = rent/income*100

print("Amount to spend:", percent_rent)