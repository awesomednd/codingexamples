#include "../exc.h"

int example5c() {
    int result = 33 / 7;
    print(addstr((char *)"The resualt is ", mkstr(result)), 0,"s");
    return 0;
}