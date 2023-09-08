#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "exc.h"


int main() {
    print("Enter the example list you wnat to use from the selection below\n", 0, "s");
    print("Example1 - 1", 0, "s");
    print("Example2 - 2", 0, "s");
    print("Example3 - 3", 0, "s");
    print("Example4 - 4", 0, "s");
    int exi;
    exi = input("i", 2);
    print("", exi, "i");
    if (exi == 1) {
        e81();
    } else if (exi == 2) {
        e82();
    } else if (exi == 3) {
        e83();
    } else if (exi == 4) {
        e84();
    }
    return 0;
}