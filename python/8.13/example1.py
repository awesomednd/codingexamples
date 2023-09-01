from random import randint # Importing randint from random

arrayData = [] # Setting the value to []

for y in range(1, 11): # Running a loop 10 times
    arrayData += [randint(0, 25565)] # Adding a random number to arrayData

for count in range(0, 10): # Output the first 10 elements in the array
    print(arrayData[count]) # Printing