#include <stdio.h>

int main(){

    int n, den;
    float s = 0;

    printf("Exercicio 3\n\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    den = 1;

    while(den <= n){
        s = s + ((float)1/den);
        den++;
    }

    printf("\nO resultado da Soma e: %.2f", s);
    
return 0;

}