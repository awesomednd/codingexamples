mark1 = int(input("Enter the mark for test 1")) # Setting the value of mark1 to the Interger of the value inputed
mark2 = int(input("Enter the mark for test 2")) # Setting the value of mark2 to the Interger of the value inputed
if mark1 >= 90 and mark2 >= 90: # Checking if mark1 and mark2 are both 90 or higher
    print("Well done you got top markes on both tests") # Printing 
elif mark1 >= 90 or mark2 >= 90: # Checking if mark1 or mark2 is 90 or higher
    print("Well done you got top markes on one of the tests") # Printing
else: # Else 
    print("You didn't quite get top markes on the tests, try again next time") # Printing