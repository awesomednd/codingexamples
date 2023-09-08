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
    int exi3;
    exi3 = input("i", 2);
    if (exi3 == 1) {
        example1b();
    } else if (exi3 == 2) {
        example2b();
    } else if (exi3 == 3) {
        example3b();
    } else if (exi3 == 4) {
        example4b();
    } else if (exi3 == 5) {
        example5b();
    } else if (exi3 == 6) {
        example6b();
    }
    return 0;
}