#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, i, j;

    printf("Alunos matriculados em progI: ");
    scanf("%d", &x);
    printf("\nAlunos matriculados em progII: ");
    scanf("%d", &y);

    int* progI = (int *) malloc(x * sizeof(int));
    int* progII = (int *) malloc(y * sizeof(int));

    if(progI == NULL || progII == NULL) {
    printf("Erro na alocação de memória.");
    exit(1);
    }

    printf("\nCodigos de matricula dos %d alunos de ProgI: ", x);
    for(i = 0; i < x; i++){
        scanf("%d", &progI[i]);
    }

    printf("\nCodigos de matricula dos %d alunos de ProgII: ", y);
    for(i = 0; i < y; i++){
        scanf("%d", &progII[i]);
    }

    int cont = 0;

    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            if(progI[i] == progII[j]){
                cont = 1;
            }
        }
    }

    if(cont == 1){
        printf("\nAlunos que cursam ambas as disciplinas: ");
        for(i = 0; i < x; i++){

            for(j = 0; j < y; j++){

                if(progI[i] == progII[j]){
                    cont = 1;
                    printf("\nCodigo: %d", progI[i]);
                    break;
                }
            }
        }
    }
    else{
        printf("\nNao ha alunos cursandos ambas as disciplinas !");
    }

    free(progI);
    free(progII);

    return 0;
}