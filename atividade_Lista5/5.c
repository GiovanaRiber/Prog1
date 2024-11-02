#include <stdio.h>

int main(){

    int n, cont;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    int vet[n];
    
    for(cont = 1; cont <= n; cont++){
            printf("\nNumero %d: ", cont);
            scanf("%d", &vet[cont]); 
            if(vet[cont] == -1){
                break;
            }
    }

    for(cont = 1; cont <= n; cont++){
        if(vet[cont] > 10 && vet[cont] < 50){
            printf("\n%d", vet[cont]);
        }
    }

return 0;
}