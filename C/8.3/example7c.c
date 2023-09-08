#include "../exc.h"

int example7c() {
    int total1 = 1 + (2 * 3);
    int total2 = (1 + 2) * 3;
    print(mkstr(total1),0, "s");
    print(mkstr(total2),0, "s");
    return 0;
}