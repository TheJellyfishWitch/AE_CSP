# AE 7th Time of Day

time = int(input("What is the hour in military time?\n"))

if time >= 20 and time <= 24 or time < 5:
    print("Your awake at this time?!?")
elif time >= 5 and time < 12:
    print("Good morning, the earth, says, hello!")
elif time >= 12 and time < 18:
    print("Good afternoon! :)")
elif time >= 0 and time < 12:
    print("Good evening/night")
else:
    print(f"Military time is only 0 - 24, you entered {time} which is not a real time, please try again :)")