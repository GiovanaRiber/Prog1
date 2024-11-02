#include <stdio.h>

float menor(float A[4][5]){
    
    float m = A[0][0];
    for( int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(m > A[i][j]){
                m = A[i][j];
            }
        }
    }
     
    return m;
}

int main(){

    int i, j; 
    float A[4][5];

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("Informe os valores da matriz[%d %d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%.1f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nO menor valor e: %.1f", menor(A));

return 0;
}