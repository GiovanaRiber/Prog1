#include <stdio.h>

int ocorrencia(int vet[], int x){
    int i, cont = 1;

    for(i = 0; i < x; i++){
        if(vet[i] == vet[x]){
            cont++;
        }
    }

    return cont;
}

int main(){

    int n, cont;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    int vet[n];

    for(cont = 1; cont <= n; cont++){
        printf("Numero %d: ", cont);
        scanf("\n%d", &vet[cont]);
    }

    int resultado = ocorrencia(vet, n);

    printf("\nO total de ocorrencias de %d e %d ", vet[n], resultado);

return 0;
}