#include <stdio.h>

int main(){

    int idade;
    double altura;

    printf("Exercicio 11\n\n");
    printf("Informe sua altura(M): ");
    scanf("%lf", &altura);
    printf("\nInforme dua idade: ");
    scanf("%i", &idade);
    
    if(altura < 1.40 || idade < 12){
        printf("\nInfelizmente, voce nao atingiu os requisitos para andar nos brinquedos :(");
    }

    else{
        printf("\nVoce pode andar nos brinquedos a seguir:\n");
    }

    if(altura >= 1.50 && idade >= 12){
        printf("\nBarca Viking");
    }
    
    if(altura >= 1.40 && idade >= 14){
            printf("\nElevator of Death");
    }

    if(altura >= 1.70 && idade >= 16){
            printf("\nFinal Killer");
    }

return 0;

}