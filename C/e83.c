#include <stdio.h>
#include "e83.h"
#include "exc.h"

int e82() {
    print("Enter the example you wnat to use from the selection below \n", 0, "s");
    print("Example1 - 1 \n", 0, "s");
    print("Example2 - 2 \n", 0, "s");
    print("Example3 - 3 \n", 0, "s");
    print("Example4 - 4 \n", 0, "s");
    print("Example5 - 5 \n", 0, "s");
    print("Example6 - 6 \n", 0, "s");
    print("Example7 - 7 \n", 0, "s");
    int exi;
    scanf("%d", &exi);
    if (exi == 1) {
        example1c();
    } else if (exi == 2) {
        example2c();
    } else if (exi == 3) {
        example3c();
    } else if (exi == 4) {
        example4c();
    } else if (exi == 5) {
        example5c();
    } else if (exi == 6) {
        example6c();
    } else if (exi == 7) {
        example7c();
    }
    return 0;
}