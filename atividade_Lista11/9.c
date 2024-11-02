#include <stdio.h>

int maiorElemento (int *vet, int tam) {

    if (tam == 1) {
        return vet[0];
    }

    int maior = maiorElemento(vet, tam-1);

    if (maior > vet[tam - 1]){
        return maior;
    } else {
        return vet[tam - 1];
    }
}

int main(){

    int tam;

    printf("Insira um valor inteiro: ");
    scanf("%d", &tam);

    int vet[tam];

    printf("\nInsira os %d valores do vetor: \n", tam);
    for(int i = 0; i < tam; i++){
        printf("valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("\nO maior elemento do vetor e %d", maiorElemento(vet, tam));

    return 0;
}