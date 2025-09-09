# AE 7th String notes

#Examples
first_name = input("What's your first name?\n").strip().title()

last_name = input("What's your last name?\n").strip().title()

full_name = first_name + " " + last_name

#Slicing
sentance = '               The quick brown fox jumps over the lazy dog.                          '.strip()
print(sentance.find("jumps"))
print(sentance[20:25])
print(sentance[sentance.find("lazy"): len("lazy")+sentance.find("lazy")])
print(len(first_name))

print("Welcome to my program", full_name + "!")

# Sanitization and Stupid Proofing
#Examples: 
# - sanitization is when you get rid of spaces or captilization, 
# - stupid proofing is when you make is so that the user doesn't break your code

# Debugging is fixing code
    # Syntax Error: a mistake in your grammar
#EX: tabs where they dont belong, misspelling things, error = "this is a bug"
    # Logic error: a mistake in our logic
#EX: numTwo = "1" & numOne = "2" print(numTwo + numOne)
    # Run-time error: when the code works until it stops
#EX: print("My favorite number is"+num)