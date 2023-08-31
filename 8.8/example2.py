from random import randint # Importing randint from random
arrayData = [] # Setting the value of array data to []

for y in range(1, 101): # Runnig a loop 100 times
    arrayData += [randint(0, 25565)] # Adding a random number to the value of arrayData

count = 0 # Setting the value of count to 0
for x in range(0, 100): # Running a loop 100 times
    if arrayData[x] > 50: # Checking if the value in arrayData at the current loop count is grater than 50
        count = count + 1 # Adding 1 to count

print("count is ", count) # Printing