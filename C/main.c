#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main() {
    printf("Enter the example list you wnat to use from the selection below\n");
    printf("Example1 - 1\n");
    printf("Example2 - 2\n");
    int exi;
    scanf("%d", &exi);
    if (exi == 1) {
        e81();
    } else if (exi == 2) {
        e82();
    }
    return 0;
}