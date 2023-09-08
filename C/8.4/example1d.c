#include "../exc.h"
#include <stdio.h>

int example1d() {
    print("Enter a color", 0, "s");
    char *colour[50];
    scanf("%s", &colour);
    print("Enter your name", 0, "s");
    char * name = inputs();
    print(addstr(addstr(name, (char *)" your faviourit colour is "), colour), 0, "s");
    return 0;
}