#include <stdio.h>

int main(){

    int n, cont = 1, div = 0;

    printf("Exercicio 9\n\n");
    printf("Informe um numero inteiro: ");
    scanf("%i", &n);

    while(cont <= n){
        if (n % cont == 0){
            div++;
        }
        cont++;
    }

    if(div == 2){
        printf("\nE um numero primo.");
    }
    else{
        printf("\nNao e um numero primo.");
    }

return 0;

}