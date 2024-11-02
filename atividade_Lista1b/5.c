#include <stdio.h>

int main (){

    int A, B, C, D, Final;

        printf("Exercicio 5\n\n");
        printf("Digite quatro valores: ");
        scanf("%d%d%d%d", &A, &B, &C, &D);

        Final = A * B - C * D;
        printf("\nO valor final e: %d", Final);

        return 0;

}