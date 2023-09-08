#include "../exc.h"

int example4c() {
    int number1 = 100;
    int number2 = 5;
    int result = number1 / number2;
    print(addstr((char *)"The result is ", mkstr(result)), 0, "s");
    return 0;
}