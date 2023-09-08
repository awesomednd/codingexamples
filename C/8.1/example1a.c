#include <stdio.h>
#include <stdlib.h>
#include "../exc.h"

int example1a() {
    int number = mkint("123");
    print("", number, "i");
    return 0;
}