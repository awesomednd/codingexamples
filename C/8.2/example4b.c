#include <stdio.h>
#include "../exc.h" 


int example4b() {
    float cost = 22.54; 
    print(addstr((char *)"The cost is ", mkstr(cost)), 0, "s");
    return 0;
}