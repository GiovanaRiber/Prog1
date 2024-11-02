#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 50

bool palindromo(char *string, int x, int y) {

    if (x >= y) {
        return true;
    }
        
    if (string[x] != string[y]) {
        return false;
    }

    return palindromo(string, x+1, y-1);
}

int main() {

    char string[MAX];

    printf("Insira uma string: ");
    fgets(string, MAX, stdin);

    string[strcspn(string, "\n")] = '\0';

    int tam = strlen(string)-1;

    if(palindromo(string, 0, tam) == true) {
        printf("\nPALINDROMO!");
    } else {
        printf("\nNAO!");
    }


    return 0;
}