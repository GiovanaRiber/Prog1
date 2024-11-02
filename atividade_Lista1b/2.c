#include <stdio.h>

int main(){

    float Base, Altura, Area;

        printf("Exercicio 2\n\n");
        printf("Digite a base: ");
        scanf("%f", &Base);
        printf("\nDigite a altura: ");
        scanf("%f", &Altura);

        Area = (Base * Altura) /2;
        printf("\nA area do trinagulo e: %.2f", Area);
        return 0;

}