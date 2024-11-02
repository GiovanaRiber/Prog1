#include <stdio.h>

int main(){

    float Salario_base, Salario_desconto, Salario_final;

    printf("Exercicio 8\n\n");
    printf("\nValor do Salario: ");
    scanf("%f", &Salario_base);

    Salario_desconto= Salario_base * 0.12;
    Salario_final= Salario_base - Salario_desconto + 50;
    printf("\nO salario final sera de: %.2f", Salario_final);
    return 0;

}