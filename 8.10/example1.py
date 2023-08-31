moreThan10 = 0
equalTo10 = 0
for x in range(0, 100):
    number = int(input("Enter a number"))
    if number > 10:
        moreThan10 = moreThan10 + 1
    elif number == 10:
        equalTo10 = equalTo10 + 1