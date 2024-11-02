#include <stdio.h>

int main(){

    float Horas_trabalhadas, Valor_hora, Numero, Salario;

        printf("Exercicio 6\n\n");
        printf("Informe o seu numero de contrato: ");
        scanf("%f", &Numero);
        printf("\nQual seu numero de horas trabalhadas?: ");
        scanf("%f", &Horas_trabalhadas);
        printf("\nQual o valor que voce recebe por hora?: ");
        scanf("%f", &Valor_hora);

        Salario = (Horas_trabalhadas * Valor_hora);
        printf("\nSeu salario e: %.2f", Salario);
        return 0;

}