#include <stdio.h>
#include <stdlib.h>

int busca(int x, int **matriz, int w, int z){

    int i, j;

    for(i = 0; i < w; i++){
        for(j = 0; j < z; j++){

            if(x == matriz[i][j]){
                return 1;
            }
        }
    }

    return 0;
}

int main(){

    int lin, col;

    printf("Insira as dimessoes da matriz[Lin/col]: ");
    scanf("%d%d", &lin, &col);

    int **matriz;
    int i, j;

    matriz = (int **) malloc(lin * sizeof(int *));

    for(i = 0; i < lin; i++){
        matriz[i] = (int *) malloc(col * sizeof(int));
    }

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Insira o valor na posicao [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMATRIZ\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    int x;

    printf("\nInsira um valor inteiro: ");
    scanf("%d", &x);

    int r = (busca(x, matriz, lin, col));

    if(r == 1){
        printf("\nO valor %d foi encontrado na matriz !", x);
    }
    else{
        printf("\nO valor %d nao foi encontrado na matriz !", x);
    }

    for(i = 0;  i < lin; i++){
        for(j = 0; j < col; j++){
            free(matriz[i]);
        }
    }
    free(matriz);

    return 0;
}