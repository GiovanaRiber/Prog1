#include <stdio.h>
#define x 20

int main(){

    int cont, i;
    int vet[x], vet2[x];

    printf("Digite 20 valores inteiros: ");
    for(cont = 0; cont < x; cont++){
        scanf("%d", &vet[cont]);
    }

    cont = 10;
    for(i = 0; i < 10; i++){
        vet2[cont] = vet[i];
        cont++;
    }
    cont = 0;
    for(i = 10; i < x; i++){
        vet2[cont] = vet[i];
        cont++;
    }
    printf("\nOs valores ordenados: ");
    for(i = 0; i < x; i++){
        printf("%d ", vet2[i]);
    }

return 0;
}
