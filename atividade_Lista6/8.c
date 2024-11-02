#include <stdio.h>

int soma(int w, int num[w][w]){

    int i, j, soma = 0;

    for(i = 0; i < w; i++){
        for(j = 0; j < w; j++){

            if (i + j != w - 1 && i != j){
                soma = soma + num[i][j];
            }
        }
    }

    return soma;

}

int main(){
    int i, j, n;

    printf("Escolha as dimensões para a matriz quadrada:\n");
    scanf("%d", &n);

    int num[n][n];

    for(i = 0; i < n; i++){
        for(j=0; j<n; j++){
            printf("Numero [%d %d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    printf("\nMatriz\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d", &num[i][j]);
        }
        printf("\n");
    }

    printf("%d", soma(n, num));

    return 0;
}