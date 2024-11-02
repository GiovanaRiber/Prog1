#include <stdio.h>
#include <ctype.h>
#define MAX 200

int quant(char *string){
    int i, cont = 0;

    for(i = 0; string[i] != '\0'; i++){
        string[i] = tolower(string[i]);
        if(string[i] == 'a' || string [i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ){
            cont++;
        }
    }
    return cont;
}

int main(){

    char string[MAX];

    printf("Digite uma string: ");
    fgets(string, MAX, stdin);

    printf("\nExistem %d vogais na string!", quant(string));

return 0;
}