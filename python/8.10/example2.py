from random import randint # Importing randint from random

arrayData = [] # Setting the value to []

for y in range(1, 101): # Running a loop 100 times
    arrayData += [randint(0, 25565)] # Adding a random number to arrayData


number = 0 # Setting the value to 0
count = 0 # Setting the value to 0
while number < 10: # Running a loop while number is less than 10
    dataInArray = arrayData[count] # Setting the value to the in the array that is the same as count
    count = count + 1 # Adding one to the value
    if dataInArray >= 100: # Checking if dataInArray is greathen or equal to 100
        number = number + 1 # Adding 1 to number