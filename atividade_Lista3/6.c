#include <stdio.h>

int main(){

    int idade, menor = 0, maior = 0;

    printf("Exercicio 6\n\n");
    printf("Digite as idades: ");

    while(idade != 0){
        scanf("%i,", &idade);
        if(idade < 18 && idade >0){
            menor++;
        }

        else if(idade > 29){
            maior++;
        }
    }
    
    printf("\nPessoas menores de 18 anos:%i ", menor);
    printf("\nPessoas maiores de 30 anos: %i", maior);

return 0;

}