#include <stdio.h>

int maior(int vet[], int n){
    int maior = 0, i;
    for(i = 1; i <= n; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
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

    int resultado = maior(vet, n);
    printf("\nO maior valor e: %d", resultado);

return 0;
}