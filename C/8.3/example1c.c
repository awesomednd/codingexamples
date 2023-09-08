#include "../exc.h"

int example1c() {
    print("Enter the first number", 0, "s");
    int num1 = input("i", 0);
    print("Enter the second number", 0, "s");
    int num2 = input("i", 0);
    int total = num1 + num2;
    print(addstr((char *)"The total is ", mkstr(total)), 0, "s");
    return 0;
}