#include <stdio.h>
#define LIN 3
#define COL 2

int main(){

    int i, j;
    float A[LIN][COL];

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Entre com as valoes[%d %d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    int cont = 0;
    float B[LIN][COL];
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(A[i][j] > 10 && A[i][j] < 50){
                B[i][j] = A[i][j];
                cont++;
            }
            else{
                B[i][j] = 0;
            }
        }
    }
    
    printf("\nValores entre 10 e 50: %d\n", cont);

    printf("\nMatriz\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%.1f ", B[i][j]);
        }
        printf("\n");
    }
    
return 0;
}