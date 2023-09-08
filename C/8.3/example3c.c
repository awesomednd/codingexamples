#include "../exc.h"

int example3c() {
    int number1 = 5;
    print("Enter a number", 0, "s");
    int number2 = input("i", 0);
    int result = number1 * number2;
    print(addstr((char *)"The result is ", mkstr(result)), 0, "s");
    return 0;
}