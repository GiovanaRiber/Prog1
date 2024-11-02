#include <stdio.h>

int main(){

    int cont, r;

    cont = 1;

    printf("Exercicio 7\n\n");
    printf("Os primeiros 50 numeros multiplos de 3 sao: \n");

    while(cont <= 50){
        r = 3 * cont;
        printf("\n%d", r);
        cont++;
    }

return 0; 
}