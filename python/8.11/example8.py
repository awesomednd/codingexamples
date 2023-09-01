def outputNumbers(num1, num2): # Creating a def command that requiers to variables
    for count in range(num1, num2+1): # Running a loop in bretween the to variables
        print(str(count)) # Printing

firstNumber = int(input("Enter the samllest number")) # Setting the value to the interger of the value inputed
secondNumber = int(input("Enter the largest number")) # Setting the value to the interger of the value inputed
outputNumbers(firstNumber, secondNumber) # Running outputNumbers with supplying the two variables