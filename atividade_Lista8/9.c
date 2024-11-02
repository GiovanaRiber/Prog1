#include <stdio.h>

void maior(int num, int vet[], int *pos){
    
    int maior, i;

    maior = vet[0];

    for(i = 0; i < num; i++){
        if(maior < vet[i]){
            maior = vet[i];
            *pos = i;
        }
    }

    printf("\nO maior valor do vetor e %d , na posicao %d !", maior, *pos);

}

int main(){

    int num;

    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    int vet[num];

    printf("\nInsira os %d valores do vetor: ", num);
    for(int i = 0; i < num; i++){
        scanf("%d", &vet[i]);
    }

    int pos;

    maior(num, vet, &pos);

    return 0;
}