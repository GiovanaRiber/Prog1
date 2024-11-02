#include <stdio.h>
#include <stdlib.h>

int** ptr(int x){

    int **matriz;
    int i, j;

    matriz = (int **) malloc(x * sizeof(int *));

    for(i = 0; i < x; i++){
        matriz[i] = (int *) malloc(x * sizeof(int));
    }

    if(matriz == NULL){
        printf("Erro na alocação de memória.");
        exit(1);
    }

    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){

            if(i+j == x-1){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
        }
    }

    return matriz;
}

int main(){

    int n, i, j;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    int** m = ptr(n);

    printf("\n=MATRIZ=\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            
            printf("[%d]", m[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){
        free(m[i]);
    }
    free(m);

    return 0;
}