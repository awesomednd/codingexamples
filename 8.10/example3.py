choice = int(input("Enter 1 or 2")) # Setting the value to the interger of the value inputed
if choice == 1: # Checking if choice is equal to 1
    word = input("Enter a word") # Setting the value to the value inputed
    for count in range(0, len(word)): # Runnig the loop for as long as the length of word
        character = word[count:count + 1] # Grabbing the curent charictor
        if character == "a" or character == "e" or character == "i" or character == "o" or character == "u": # Checking if the current charictor is a voel
            print(character) # Printing