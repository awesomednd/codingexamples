#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, nr1 ;
    int aux, nr3, nr4;
    int nr5, nr6;
    int nr7;
    for (i = 0; i < 100000000; i++) { 
        srand(i);
        int randomnum = rand() % 6 + 1 ;
        if (randomnum == 1) {
            nr1++;
        } else if (randomnum == 2) {
            nr7++;
        } else if (randomnum == 3) {
            nr3++;
        } else if (randomnum == 4) {
            nr4++;
        } else if (randomnum == 5) {
            nr5++;
        } else if (randomnum == 6) {
            nr6++;
        }
    }
    printf("Number of 1 rolled is %d \n", nr1);
    printf("Number of 2 rolled is %d \n", nr7);
    printf("Number of 3 rolled is %d \n", nr3);
    printf("Number of 4 rolled is %d \n", nr4);
    printf("Number of 5 rolled is %d \n", nr5);
    printf("Number of 6 rolled is %d \n", nr6);
    return 0;
}