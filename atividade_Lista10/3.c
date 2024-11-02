#include <stdio.h>
#include <stdlib.h>

int main(){

    int LIN, COL, **matriz;
    int i, j;

    printf("Informe o numero de linhas e colunas da matriz: ");
    scanf("%d%d", &LIN, &COL); 

    matriz = (int **) malloc(LIN * sizeof(int *));

    for(i = 0; i < LIN; i++){
        matriz[i] = (int *) malloc(COL * sizeof(int));
    }

    if(matriz == NULL){
        printf("Erro na alocação de memória.");
        exit(1);
    }

    printf("\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("[%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n=MATRIZ=\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    int cont = 0;

    for(i = 0; i < LIN; i++){

        for(j = 0; j < COL; j++){
            
            if(matriz[i][j] % 2 != 0 && matriz[i][j] % 7 == 0){
                cont++;
            }
        }
    }

    if(cont == 0){
        printf("\nNao ha valores impares multiplos de 7 na matriz!");
    }
    else{

        int* vet = (int *) malloc(cont * sizeof(int));
        int cont2 = 0;

        for(i = 0; i < LIN; i++){

            for(j = 0; j < COL; j++){

                if(matriz[i][j] % 2 != 0 && matriz[i][j] % 7 == 0){
                    vet[cont2] = matriz[i][j];
                    cont2++;
                }
            }
        }

        printf("\nOs valores impares e multiplos de 7: ");
        for(i = 0; i < cont; i++){
            printf("\n%d", vet[i]);
        }        
    }

    for(i = 0;  i < LIN; i++){
        for(j = 0; j < COL; j++){
            free(matriz[i]);
        }
    }
    free(matriz);

    return 0;
}