#include <stdio.h>

float calcula_area(float a, float b){
    return a * b;
}

int main(){

    float comp, larg, area;

    printf("Exercicio 1\n");
    printf("\nInforme o comprimento do terreno: ");
    scanf("%f", &comp);
    printf("\nInforme a largura:" );
    scanf("%f", &larg);

    area = calcula_area(comp, larg);

    printf("\nA area do terreno e: %.2f", area);
    
return 0;
}