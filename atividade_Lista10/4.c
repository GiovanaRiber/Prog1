#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int main(){

    int i, j;

    int **m1, **m2;

    m1 = (int **) malloc(M * sizeof(int *));

    for(i = 0; i < M; i++){
        m1[i] = (int *) malloc(N * sizeof(int));
    }

    m2 = (int **) malloc(M * sizeof(int *));

    for(i = 0; i < M; i++){
        m2[i] = (int *) malloc(N * sizeof(int));
    }

    if(m1 == NULL || m2 == NULL){
        printf("Erro na alocação de memória.");
        exit(1);
    }

    printf("A\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Insira o valor da posicao [%d,%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nB\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Insira o valor da posicao [%d,%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\nPrimeira Matriz\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("[%d]", m1[i][j]);
        }
        printf("\n");
    }

    printf("\nSegunda Matriz\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("[%d]", m2[i][j]);
        }
        printf("\n");
    }

    int **m3;

    m3 = (int **) malloc(M * sizeof(int *));

    for(i = 0; i < M; i++){
        m3[i] = (int *) malloc(N * sizeof(int));
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("\nMatriz Soma\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("[%d]", m3[i][j]);
        }
        printf("\n");
    }

    for(i = 0;  i < M; i++){
        for(j = 0; j < N; j++){
            free(m1[i]);
        }
    }
    free(m1);

    for(i = 0;  i < M; i++){
        for(j = 0; j < N; j++){
            free(m2[i]);
        }
    }
    free(m2);

    for(i = 0;  i < M; i++){
        for(j = 0; j < N; j++){
            free(m3[i]);
        }
    }
    free(m3);

    

    return 0;
}