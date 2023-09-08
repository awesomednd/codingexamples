#include <stdio.h>
#include <stdlib.h>
#include "../exc.h"

int example2a() {
    char* values = mkstr(22.4);
    gcvt(22.4, 3, values);
    //printf("%d", mkstr(22.4));
    print(values, 0, "s");
    return 0;
}