#include <stdio.h>

int main(){

    int i, j, lin, col;

    printf("Digite as dimensoes da matriz: ");
    scanf("%d%d", &lin, &col);

    float A[lin][col];
    float B[col][lin];
   
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Entre com as valoes[%d %d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%.1f ", A[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            B[j][i] = A[i][j];
        }
    }

    printf("\nMatriz Transposta\n");
    for(i = 0; i < col; i++){
        for(j = 0; j < lin; j++){
            printf("%.1f ", B[i][j]);
        }
        printf("\n");
    }
return 0;
}