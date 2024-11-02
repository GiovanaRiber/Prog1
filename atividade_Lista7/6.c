#include <stdio.h>
#define MAX 200

int quant(char *string, char x){

    int i, cont = 0;

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == x){
            cont++;
        }
    }
    return cont;
}

int main(){

    char string[MAX], x;

    printf("Digite uma  string: ");
    fgets(string, MAX, stdin);
    printf("\nDigite uma caractere: ");
    scanf(" %c", &x);

    printf("\nO caractere %c aparece na string %d vezes!", x, quant(string, x));


return 0;
}