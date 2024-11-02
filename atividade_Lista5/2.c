#include <stdio.h>

int main(){

    int n, i;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    int vet[n];

    for(i = 1; i <= n; i++){
        printf("\nNumero:");
        scanf("%d", &vet[i]);
    }
  
    for(i = n; i >= 1; i--){
        printf("\n%d", vet[i]);
    }


return 0;
}