#include <stdio.h>

int main(){

    float Dias_alugados, Km_rodados, Km_valor, Diaria_total, Total_gasto, Desconto;
    
    printf("Exercicio 7\n\n");
    printf("Por quantos dias voce ficou com o carro?: ");
    scanf("%f", &Dias_alugados);
    printf("\nQuantos quilometros foram rodados?: ");
    scanf("%f", &Km_rodados);

    Km_valor = Km_rodados * 0.01;
    Diaria_total = 30 * Dias_alugados;
    Total_gasto = Km_valor + Diaria_total;
    Desconto = Total_gasto * 0.10;
    printf("\nConsiderando o desconto, o valor total a ser pago e: %.2f", Total_gasto - Desconto);
    return 0;

}