#include <stdio.h>
#define LIN 5
#define COL 3

int main(){

    int i, j;
    int  A[LIN][COL];

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Entre com as valoes[%d %d]: ", i, j);
            scanf("%d", &A[i][j]);
            
        }
    }

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    int vet[15], cont = 0;

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(A[i][j] % 3 == 0){
                vet[cont] = A[i][j];
                cont++;
            }
        }
    }
    printf("Os multiplos sao:\n");
    for (i = 0; i < cont; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
return 0;
}