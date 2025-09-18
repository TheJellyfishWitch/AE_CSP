# AE 7th Old Enough

age = int(input("How old are you?\n"))

if age >= 18:
    print("You are old enough to vote!")
elif age >= 16:
    print("You are old enough to legally drive!")
elif age >= 15:
    print("You are old enough to get a learner's permit to drive!")
elif age >= 4:
    print("You are old enough to go to school!")
else:
    print("Sorry you cannot do anything yet :(")