#include "../exc.h"

int example2c() {
    int number1 = 10;
    int number2 = 20;
    int result = number2 - number1;
    print(addstr((char *)"The result was ", mkstr(result)), 0, "s");
    return 0;
}