#include <stdio.h>
#include <stdlib.h>

int* soma(int *px, int *py, int n){

    int *soma, i;

    soma = (int *) malloc(n * sizeof(int));

    if(soma == NULL){
    printf("Erro na alocação de memória.");
    exit(1);
    }

    for(i = 0; i < n; i++){
        soma[i] = px[i] + py[i];
    }

    return soma;
}

int main(){

    int n;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    int vetx[n], vety[n];
    int i;
    int *px, *py;

    px = vetx;
    py = vety;

    printf("\nInsira os %d valores do primeiro vetor: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &px[i]);
    }

    printf("\nInsira os %d valores do segundo vetor: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &py[i]);
    }

    int* r = soma(px, py, n);

    printf("\n====SOMA====");
    for(i = 0; i < n; i++){
        printf("\n%d + %d = %d", px[i], py[i], r[i]);
    }

    free(r);
    return 0;
}