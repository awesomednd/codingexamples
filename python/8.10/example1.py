moreThan10 = 0 # Setting the value to 0
equalTo10 = 0 # Setting the value to 0
for x in range(0, 100): # Running a loop 100 times
    number = int(input("Enter a number")) # Settng the value to the interger of the value inputed
    if number > 10: # Checking if number is greater than 10
        moreThan10 = moreThan10 + 1 # Adding 1 to the variable
    elif number == 10: # Checking if number is equal to 10
        equalTo10 = equalTo10 + 1 # Adding one to the variable