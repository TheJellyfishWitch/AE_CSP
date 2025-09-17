# AE 7th Conditionals Notes

print("You: Can I go to my friends house? Please!")

homework_done = input("Did you do your homework?\n").strip().capitalize()

if homework_done == "Yes":
    print("Yes you can go, BUT you have to be home by 9.")
else: 
    print("Go do your homework!")

print("Parent: What's your grade in Math?")

grade = input("Uuugh, its a \n")

if grade >= 90:
    print(f"You have {grade}% which is an A!")
elif grade >= 80:
    print(f"You have {grade}% which is a B")
else:
    print(f"You have a {grade}% which is a C or lower :(")