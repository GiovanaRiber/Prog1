#include <stdio.h>
#include <stdlib.h>

int main(){

    int *array, i;

    array = (int *) calloc(20, sizeof(int));

    if(array == NULL){
        printf("Erro: Memoria insuficiente !\n");
        exit(1);
    }

    array = (int *) realloc(array, 30 * sizeof(int));

    for(i = 0; i < 30; i++)
        array[i] = i;

    for(i = 0; i < 30; i++)
        printf("%d\n", array[i]);


    return 0;
}