#include <stdio.h>

int print(char valuetoprint[200], float invaltoprint, char vt[1]) {
    if (vt == "s") {
        printf("%s", valuetoprint);
    } else if (vt == "i") {
        printf("%d", invaltoprint);
    }
}

int input(char wt[1], int lw) {
    if (wt == "i") {
        int intrval;
        scanf("%d", &intrval);
        return intrval;
    } else if (wt == "s") {
        char intrval[lw];
        scanf("%s", &intrval);
        return intrval;
    }
}
