#include <stdio.h>

int main(){

    int num, cont,soma, n;
    float media;

    printf("Exercicio 5\n\n");
    printf("Informe a quantidades de valores inteiros a serem calculados: ");
    scanf("%d", &num);

    cont = 1;
    soma = 0;

    while(cont <= num){
        printf("\nValor %d: ", cont);
        scanf("%d", &n);
        soma = soma + n;
        cont++;
    }

    media = (float)soma/num;

    printf("\nA media dos valores e: %.2f", media);







return 0;

}