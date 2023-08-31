choice = int(input("Enter 1 or 2"))
if choice == 1:
    word = input("Enter a word")
    for count in range(0, len(word)):
        character = word[count:count + 1]
        if character == "a" or character == "e" or character == "i" or character == "o" or character == "u":
            print(character)