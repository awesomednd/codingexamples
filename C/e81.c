#include <stdio.h>
#include "e81.h"
#include "exc.h"

int e81() {
    print("Enter the example you wnat to use from the selection below", 0, "s");
    print("Example1 - 1", 0, "s");
    print("Example2 - 2", 0, "s");
    int exi;
    exi = input("i", 2);
    if (exi == 1) {
        example1a();
    } else if (exi == 2) {
        example2a();
    }
    return 0;
}