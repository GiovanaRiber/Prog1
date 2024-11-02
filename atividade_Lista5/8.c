#include <stdio.h>

int main(){

   int q_idade, cont, menor = 0, maior = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &q_idade);

    int vet[q_idade];

    printf("\nDigite as idades:\n");
    for(cont = 1; cont <= q_idade; cont++){
        scanf("\n %d", &vet[cont]);
        if(vet[cont] == 0){
            break;
        }
        else if(vet[cont] < 18){
            menor++;
        }
        else if(vet[cont] > 30){
            maior++;
        }
    }

    printf("\nPessoas menores de 18: %d\nPessoas maiores de 30: %d", menor, maior);

return 0;
}