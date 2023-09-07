#include <stdio.h>
#include "e81.h"

int e81() {
    printf("Enter the example you wnat to use from the selection below");
    printf("Example1 - 1");
    printf("Example2 - 2");
    int exi;
    scanf("%d", &exi);
    if (exi == 1) {
        example1a();
    } else if (exi == 2) {
        example2a();
    }
    return 0;
}