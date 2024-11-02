#include <stdio.h>
#include <math.h>

int main(){

    float A, B, C, Equacao_A, Equacao_B, Equacao_C, Equacao_D;

        printf("Exercicio 1\n\n");
        printf("Indique tres valores:");
        scanf("%f%f%f", &A, &B, &C);

        Equacao_A = (A * B)/C;
        Equacao_B = pow(A,2) + B + (5 * C);
        Equacao_C = A * B * C + B + (C/3) * 5 - 1;
        Equacao_D = pow(A * B * C,3)/2;
        printf("\nA: %.2f\nB: %.2f\nC: %.2f\nD: %.2f\n", Equacao_A, Equacao_B, Equacao_C, Equacao_D);
        return 0;

}