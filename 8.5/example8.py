mark1 = int(input("Enter the mark for test 1"))
mark2 = int(input("Enter the mark for test 2"))
if mark1 >= 90 and mark2 >= 90:
    print("Well done you got top markes on both tests")
elif mark1 >= 90 or mark2 >= 90:
    print("Well done you got top markes on one of the tests")
else:
    print("You didn't quite get top markes on the tests, try again next time")