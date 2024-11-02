#include <stdio.h>

void funcao(int *ptr_inicio, int x) {

    int *ptr_fim = ptr_inicio + x - 1;

    while(ptr_fim > ptr_inicio) {
        printf ("%d ", *ptr_inicio);
        printf ("%d ", *ptr_fim);
        ptr_inicio++;
        ptr_fim--;
    }
    printf("\n");
}

int main() {

    int vet[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    funcao(vet, 20);

    return 0;
}