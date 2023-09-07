#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "exc.h"

int main() {
    print("Enter the example list you wnat to use from the selection below\n", 0, "s");
    print("Example1 - 1\n", 0, "s");
    print("Example2 - 2\n", 0, "s");
    int exi;
    exi = input("i", 2);
    print("", exi, "i");
    if (exi == 1) {
        e81();
    } else if (exi == 2) {
        e82();
    }
    return 0;
}