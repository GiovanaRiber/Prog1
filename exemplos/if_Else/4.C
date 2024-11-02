#include <stdio.h>
#include <math.h>

int main(){

    float x, y;
    char op;

        printf("Digite um numero, um operado e outro numero:");
            scanf("%f%C%f", &x, &op, &y);

            switch (op){
                case '+':
                    printf("\nAdicao = %.2f", x + y); break;
                case '-':
                    printf("\nSubtracao = %2.f", x - y); break;
                case '*':
                    printf("\nMultiplicacao = %.2f", x * y); break;
                case '/':
                    printf("\nDivisao = %.2f", x / y); break;
                default:
                    printf("\nOperador desconhecido");
            }
return 0;

}