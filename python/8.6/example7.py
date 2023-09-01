number = 5 # Setting the value of number to 10
guessed = False # Setting the value of gussed to False
while guessed == False: # Running a loop while guessed is False
    guess = int(input("Guess the number")) # Setting the value of guess to the int of the inputed value
    if guess == number: # Checking if guess is equal to number
        guessed = True # Setting guess to True
        print("You gussed correct") # Printing