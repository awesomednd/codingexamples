#include <stdio.h>
#include "../exc.h" 


int example6b() {
    char *word;
    print("Enter a word", 0, "s");
    word = inputs();
    print(addstr((char *)"The word entered was ", word), 0, "s");
    return 0;
}