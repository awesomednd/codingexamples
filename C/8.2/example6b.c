#include <stdio.h>
#include "../exc.h" 


int example6b() {
    char word;
    print("Enter a word", 0, "s");
    word = input("s", 200);
    print(addstr((char *)"The word entered was ", (char *)word), 0, "s");
    return 0;
}