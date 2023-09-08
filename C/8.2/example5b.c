#include <stdio.h>
#include "../exc.h" 


int example5b() {
    int number;
    print("Enter a number", 0, "s");
    number = input("i", 0);
    print(addstr((char *)"The number entered was ", mkstr(number)), 0, "s");
    return 0;
}