#include <stdio.h>

int main(){

    float Valor, Gorjeta;

        printf("Exercicio 4\n\n");
        printf("Qual foi o valor gasto no restaurante:? ");
        scanf("%f", &Valor);

        Gorjeta = Valor * 0.10;
        printf("\nConsiderando a gorjeta, o valor final a ser pago sera: %.2f", Valor + Gorjeta);
        return 0;

}