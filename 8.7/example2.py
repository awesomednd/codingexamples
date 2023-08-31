from random import randint # Importing ranint from random 

arrayData = [] # Setting the value of array data to []
total = 0 # Setting the value of total to 0

for x in range(1, 101): # Running a loop 100 times
    arrayData += [randint(0, 25565)] # Adding a random number to the array of arrayData

for count in range(0, 100): # Running a loop 100 times
    total = total + arrayData[count] # Adding the number in the arrayData taht corisponds with count to the total

print(str(total)) # Printing the string of total