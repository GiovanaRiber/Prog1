#include <stdio.h>

int div(int num){
    int cont, quantDiv = 0;
    for(cont=1; cont <= num; cont++){
        if(num % cont == 0){
            printf("\n%d", cont);
            quantDiv++;
        }
    }
    return quantDiv;
}

int main(){

    int num, n;

    printf("Exercicio 8\n\n");
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    n = div(num);

    printf("\nA quantidade de divisores e: %d", n);


return 0;
}