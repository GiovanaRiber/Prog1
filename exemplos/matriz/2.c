#include <stdio.h>
#define COL 2
#define LIN 2

int main(){

    int i, j;
    float A[LIN][COL], B[LIN][COL], C[LIN][COL];

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("Entre com as notas [%d %d]: ", i, j);
        scanf("%f", &A[i][j]);
        }
    }

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("Entre com as notas [%d %d]: ", i, j);
        scanf("%f", &B[i][j]);
        }
    }

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("%.1f ", A[i][j]);
        }
    printf("\n");
    }

    printf("\nMatriz B\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("%.1f ", B[i][j]);
        }
    printf("\n");
    }

    printf("\nMatriz C\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
        printf("%.1f ", C[i][j]);
        }
    printf("\n");
    }



return 0;
}