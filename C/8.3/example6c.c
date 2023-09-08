#include "../exc.h"

int example6c() {
    float result = divs(33 , 7);
    print(addstr((char *)"The result is ", mkstr(result)), 0, "s");
    return 0;
}