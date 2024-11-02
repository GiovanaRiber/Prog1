#include <stdio.h>
 
int soma(int n, int vet[n], int cont){

    if (cont <= n){
        return vet[cont - 1] + soma(n, vet, cont+1);

    } else {
        return 0;
    }
    
}

int main(){

    int x, cont = 0;

    printf("Valor inteiro: ");
    scanf("%d", &x);

    int vet[x];

    for(int i = 0; i < x; i++){
        
        printf("\nValor %d: ", i+1);
        scanf("%d", &vet[i]);

    }
    
    printf("\nA soma dos valores e %d", soma(x, vet, cont+1));

    return 0;
}