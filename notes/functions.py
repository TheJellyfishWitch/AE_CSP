# AE 7th Functions Notes

def welcome():
    name = input("What's your name?")
    print(f"Hey, {name}")


print("This is not in my function :)")
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()
#welcome()

def add(number, number_two):
    number += number_two
    print(number)

num_one = 21
num_two = 5

add(5, 9)
add(7, 5)
add(1000010100, 8848484848484849290482834828743)
add(num_one, num_two)

import random

def roll(mod):
    return random.randint(2, 18) + mod


str = roll(1)
dex = roll(2)
int = roll(2)
char = roll(1)
print("Here are your stats:")
print(f"Strength: {str}\nDexterity: {dex}\nIntelligence: {int}\nCharisma: {char}\n")