#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array, i;

    array = (int *) malloc(20 * sizeof(int));

    if(array == NULL){

        printf("Erro: Memoria insuficiente !\n");
        exit(1);
    }

    for(i = 0; i < 20; i++)
        array[i] = i;

    for(i = 0; i < 20; i++){

        printf("%d\n", array[i]);
    }

    free(array);

    return 0;
}