# AE 7th Loops Notes

dinner_foods = ["Tomato soup", "Grilled Cheese Sandwich", "Green Beans", "Warm Chocolate Chip Cookies"]

#For Loop
for dinner_food in dinner_foods:
    print(f"{dinner_food} is a componient in tonights dinner")

for x in range(1, 21):
    print(x)

#While Loops
"""i = 0
while True:
    print(i)
    i+= 1"""
#Infinite Loop (on of 3 steps is missing)

#Correct While Loop
i = 1

while i <= 20:
    print(i)
    i+= 1

x = 1
while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number")
    else:
        print(f"{x} is an odd number")
    x += 1

import random
import time

d = 1
end = random.randint(1, 20)

"""while d != end:
    print("Duck")
    d += 1
    time.sleep(1)

print ("GOOSE!")"""

while True:
    if d == end:
        print("GOOSE!")
        break
    else:
        print("Duck")
        d += 1
        time.sleep(1)