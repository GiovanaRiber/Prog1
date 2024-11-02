#include <stdio.h>
 
 int soma(int n, int vet[n]){

    if (n == 0) {
        return vet[0];
    } else {
        return vet[n] + soma(n-1, vet);
    }
 }

int main(){

    int x;

    printf("Valor inteiro: ");
    scanf("%d", &x);

    int vet[x];

    for(int i = 0; i < x; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    
    printf("\nA soma dos valores e %d", soma(x-1, vet));

    return 0;
}