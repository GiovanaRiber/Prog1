#include <stdio.h>
#define x 3

int main(){

    int cont, vet[x], repeticao = 0, posicao = 0;

    printf("Digite os valores:\n");

    for(cont = 0; cont < x; cont++){
        scanf("%d", &vet[cont]);
    }

    int vet2[repeticao];

    for(cont = 0; cont < x; cont++){
        if(vet[cont] == vet[x - 1]){
            repeticao++;
        }
    }

    for(cont = 0; cont < x; cont++){
        if(vet[cont] == vet[x - 1]){
            vet2[posicao] = cont + 1;
            posicao++;
        }
    }

    printf("\n%d apareceu %d vezes, nas posicoes ", vet[x - 1], posicao);
    for(cont = 0; cont < posicao; cont++){
        printf("%d ", vet2[cont]);
    }

return 0;
}