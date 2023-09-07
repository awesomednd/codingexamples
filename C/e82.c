#include <stdio.h>
#include "e82.h"

int e82() {
    printf("Enter the example you wnat to use from the selection below \n");
    printf("Example1 - 1 \n");
    printf("Example2 - 2 \n");
    printf("Example3 - 3 \n");
    printf("Example4 - 4 \n");
    printf("Example5 - 5 \n");
    printf("Example6 - 6 \n");
    int exi;
    scanf("%d", &exi);
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