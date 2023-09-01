count = 0 # Swtting the value of count to 0
continueInput = "Yes" # Setting the value of continueInput to Yes
while continueInput == "Yes": # Running a loop while continueInput is Yes
    continueInput = input("Do you want to continue") # Setting the value of continueInput to the value inputed
    count = count + 1 # Adding 1 to the value of count
print("You continued ", str(count - 1), " times") # Printing