from random import randint # Importing randint from random

def totalValues(): # Creating the definiton for totalValues
    arrayData = [] # Setting the value to []
    for y in range(1, 51): # Running a loop 50 times
        arrayData += [randint(0, 25565)] # Adding a random number to arrayData
    total = 0 # Setting the value to 0
    for x in range(0, 50): # Running a loop 50 times
        total = total + arrayData[x] # adding the value of the current point in the array to the value
    return total # Reterning total

print(str(totalValues())) # Printing