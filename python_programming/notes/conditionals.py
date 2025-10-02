# AE 7th Conditionals Notes

print("You: Can I go to my friends house? Please!")

homework_done = input("Did you do your homework?\n").strip().capitalize()

if homework_done == "Yes":
    print("Yes you can go, BUT you have to be home by 9.")
else: 
    print("Go do your homework!")

grade = 11

if grade >= 90:
    if grade > 100:
        print("You cheated that isn't possible")
    else:
        print(f"You have {grade}% which is an A!")
elif grade >= 80:
    print(f"You have {grade}% which is a B")
    print("")
else:
    print(f"You have a {grade}% which is a C or lower :(")

name = input("What is your name?\n")

if name == "Ms LaRose":
    print("You are the teacher,")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"Hello {name}, you are a student at UCAS")