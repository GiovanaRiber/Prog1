#include <stdio.h>
#define LIN 3
#define COL 5
int main(){

    int i, j;
    float A[LIN][COL], vet[COL] = {0};

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Entre com as valoes[%d %d]: ", i, j);
            scanf("%f", &A[i][j]);
            vet[j] += A[i][j];
        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("%.1f ", A[i][j]);
        }
    printf("\n");
    }

    printf("\n");
    for(j = 0; j < COL; j++){
        printf("%.1f ", vet[j]);
    }

return 0;
}