# AE 7th Silly Sentences

import time
noun_one = input("Enter noun\n")
noun_two = input("Enter noun\n")
adjective_one = input("Enter adjective\n")
noun_three = input("Enter noun\n")
verb_ing_three = input("Enter verb ending in 'ing'\n")
verb_ing_one = input("Enter verb ending in 'ing'\n")
verb_ing_two = input("Enter verb ending in 'ing'\n")
noun_four = input("Enter adjective\n")
job_one = input("Enter job\n")
adjective_three = input("Enter adjective\n")
adjective_four = input("Enter adjective\n")

print("Generating Mad-Lib...")
time.sleep(0.5)
print("...")
time.sleep(0.5)

print("On Halloween, you get to go trick-or-treating!")
print("Everyone will dress up in costumes, like a/an " + noun_one + " or a/an " + noun_two)
print("This year, you decided to dress up as a/an " + adjective_one + " " + noun_three)
print("Your mom takes you and your best friend trick-or-treating. While you are out, your dad stays at home and " + verb_ing_three)
print("Other fun things to do on Halloween are " + verb_ing_one + " scary movies and " + verb_ing_two)
print("This year, you get lots of " + noun_four + " !")
print("When you get home, your dad says he wants some, because he works hard as a " + job_one + " and he deserves some of your " + noun_four)
print("You are " + adjective_three + " but you give it to him anyway. Dad is so " + adjective_four + " but you love him anyway!")