#include <stdio.h>
#define MAX 200

int quant(char *string){

    int i, cont = 0;

    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == ' '){
            cont++;
        }
    }
    return cont;
}

int main(){

    char string[MAX];

    printf("Digite uma string: ");
    fgets(string, MAX, stdin);

    printf("Existem %d espacos em branco! ", quant(string));


return 0;
}