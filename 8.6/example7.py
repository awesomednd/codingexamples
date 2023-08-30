number = 5
guessed = False
while guessed == False:
    guess = int(input("Guess the number"))
    if guess == number:
        guessed = True
        print("You gussed correct")