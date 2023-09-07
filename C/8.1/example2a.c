#include <stdio.h>
#include <stdlib.h>

int example2a() {
    char values[20];
    float vals = 22.4;
    sprintf(values, "%f", vals);
    printf("\n%s\n", values);
    return 0;
}