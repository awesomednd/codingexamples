#include <stdio.h>
#include "e82.h"
#include "exc.h"

int e82() {
    print("Enter the example you wnat to use from the selection below \n", 0, "s");
    print("Example1 - 1 \n", 0, "s");
    print("Example2 - 2 \n", 0, "s");
    print("Example3 - 3 \n", 0, "s");
    print("Example4 - 4 \n", 0, "s");
    print("Example5 - 5 \n", 0, "s");
    print("Example6 - 6 \n", 0, "s");
    int exi;
    exi = input("i", 2);
    if (exi == 1) {
        example1b();
    } else if (exi == 2) {
        example2b();
    } else if (exi == 3) {
        example3b();
    } else if (exi == 4) {
        example4b();
    } else if (exi == 5) {
        example5b();
    } else if (exi == 6) {
        example6b();
    }
    return 0;
}