#ifndef exc.h
#define exc.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int print(char valuetoprint[200], float invaltoprint, char vt[1]) {
    if (vt == "s") {
        printf("%s \n", valuetoprint);
    } else if (vt == "i") {
        printf("%d \n", invaltoprint);
    } else if (vt == "f") {
        printf("%f \n", invaltoprint);
    }
}

static int input(char wt[2], int lw) {
    if (wt == "i") {
        int intrval;
        scanf("%d", &intrval);
        return intrval;
    } else if (wt == "f") {
        float intrval;
        scanf("%f", &intrval);
        return intrval;
    }
}

static char *inputs() {
    static char intrval[400];
    scanf("%s", &intrval);
    return intrval;
    free(intrval);
}


static int mkint(char numbertochange[100]) {
    return atoi(numbertochange);
}

static char* mkstr(double stringtochange) {
    static char changed[500];
    gcvt(stringtochange, 10, changed);
    return changed;
}

static int mkflt(char floattochange[200]) {
    return atof(floattochange);
}

static char* addstr(char *string1, char *string2) {
    size_t totalLength = strlen(string1) + strlen(string2) + 1;
    char *result = (char *)malloc(totalLength);
    strcpy(result, string1);
    strcat(result, string2);
    return result;
    free(result);
}

static float divs(float num1, float num2) {
    float result = num1 / num2;
    return result;
}

#endif