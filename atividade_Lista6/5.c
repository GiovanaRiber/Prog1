#include <stdio.h>

int main(){

    int i, j;
    float A[5][5] = {0}, media = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Entre com as valoes[%d %d]: ", i, j);
            scanf("%f", &A[i][j]);

            if(i == j){
                media = media + A[i][j];
            }

        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%.1f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nA media dos valores da diagonal principal e: %.1f", media/5);

return 0;
}