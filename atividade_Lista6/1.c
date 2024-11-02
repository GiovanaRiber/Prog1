#include <stdio.h>
#define LIN 3
#define COL 3

int main(){

    int i, j;
    float A[LIN][COL], soma = 0;

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Entre com as valoes[%d %d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            
        printf("%.1f ", A[i][j]);
        }
    printf("\n");
    }

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            soma = soma + A[i][j];
        }
        printf("\n%.1f", soma);
        soma = 0;
        printf("\n");
    }


return 0;
}