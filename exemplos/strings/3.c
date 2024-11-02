#include <stdio.h>
#define MAX 500

int main(){

    char frase[MAX + 1]; // 1 caractere a mais para o \0
    int i = 0, cont = 0;

    printf("Entre com uma string: ");
    fgets(frase, MAX + 1, stdin);

    while(frase[i] != '\0'){
        if(frase[i] != '\n'){ // nao conta o \0
            cont++;
        }
        i++;
    }
    printf("\nA string tem %d caracteres\n", cont);


return 0;
}