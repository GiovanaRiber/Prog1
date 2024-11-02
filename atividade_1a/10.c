#include <stdio.h>

int main(){

    float Distancia, Combustivel, Consumo;  

    printf("Exercicio 10\n");
    printf("\nQual e a distancia percorrida(Km)?: ");
    scanf("%f", &Distancia);
    printf("\nQuanto combustivel foi gasto(L)?:");
    scanf("%f", &Combustivel);

    Consumo= Distancia/Combustivel;
    printf("\nO comsumo medio sera de: %.1f", Consumo);
    return 0;

}