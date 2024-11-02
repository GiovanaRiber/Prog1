#include <stdio.h>

int soma(float n){
    int s = 0;
    s = s + n;
    return s;

}

int main(){

    int x, i, j, somas = 0;
    printf("Informe o tamanho da matriz: ");
    scanf("%d", &x);

    int A[x][x];

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("Informe os valores da matriz[%d %d]: ", i, j);
            scanf("%d", &A[i][j]);

            if(i < j){
                somas += soma(A[i][j]);
            }
        }
    }

    printf("\nMatriz A\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n%d", somas);

return 0;
}