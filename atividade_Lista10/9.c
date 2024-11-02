#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *string = (char *) malloc(100 * sizeof(char));

    printf("Insira uma string: ");
    fgets(string, 100, stdin);

    strrev(string);

    printf("\nString invertida: %s", string);

    return 0;
}