count = 0
continueInput = "Yes"
while continueInput == "Yes":
    continueInput = input("Do you want to continue")
    count = count + 1
print("You continued ", str(count - 1), " times")