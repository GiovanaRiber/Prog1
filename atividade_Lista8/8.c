#include <stdio.h>
#define MAX 100

int main(){

    char string[MAX] = "Nao gosto de programar em C";
    char *p = string;
    int i;

    for(i = 4; p[i] != '\0'; i++){
        printf("%c", p[i]);
    }

    return 0;
}