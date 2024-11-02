#include <stdio.h>

int main(){

    float Desconto, Diaria, Diaria_final, Ocupacao;

    printf("Exercicio 9\n\n");
    printf("Qual o valor da diaria: ");
    scanf("%f", &Diaria);

    Desconto = Diaria * 0.30;
    Diaria_final = Diaria - Desconto;
    Ocupacao = 45;
    printf("\nO valor da diaria com desconto e: %.2f\n\n", Diaria_final);
    printf("O valor arrecadado com o dobro da ocupacao e diaria com desconto e: %.2f\n\n", Ocupacao * 0.70 * Diaria_final);
    printf("O valor arrecadado com ocupacao e diaria normais e: %.2f\n\n", Ocupacao * 0.35 * Diaria);
    return 0;

}