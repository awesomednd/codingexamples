#include <stdio.h>

int example6b() {
    char word[200];
    printf("Enter a word\n");
    scanf("%s", &word);
    printf("\nThe word entered was %s", word);
    return 0;
}