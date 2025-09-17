# AE 7th Update Budgest Calculator

print("Welcome user this is your Financial Calculator")

def get_input(prompt):
    while True:
        try:
            value = float(input(prompt))
            if value < 0:
                print("Please enter a non-negative number.")
                continue
            return value
        except ValueError:
            print("Invalid input. Please enter a valid number.")

# Function to calculate percentage of income
def calculate_percentage(income, expense):
    if income == 0:
        return 0.0  # Avoid division by zero
    return (expense / income) * 100

# Get user inputs
income = get_input("Monthly Income\n")
rent = get_input("Rent/Mortgage\n")
utilities = get_input("Utilities\n")
groceries = get_input("Groceries\n")
transportation = get_input("Transportation\n")

# Calculate total expenses
total_expenses = rent + utilities + groceries + transportation

# Calculate and display percentages
print("\nExpense Breakdown as Percentage of Income:")
print(f"Rent/Mortgage: {calculate_percentage(income, rent):.2f}%")
print(f"Utilities: {calculate_percentage(income, utilities):.2f}%")
print(f"Groceries: {calculate_percentage(income, groceries):.2f}%")
print(f"Transportation: {calculate_percentage(income, transportation):.2f}%")
print(f"Total Expenses: {calculate_percentage(income, total_expenses):.2f}%")