#include <stdio.h>

int main(){

    int r1, r2, r3, r4, r5;

    printf("Exercicio 10\n\n");
    printf("Requisito 1: Interface Grafica\nRequisito 2: Inteligencia Artificial");
    printf("\nRequisito 3: Encapsulamento\nRequisito 4: Indentacao\nRequisito 5: Structs");
    printf("\n\nDe acordo com os requisitos apresentados, digite 1 para requisito cumprido e 0 para nao cumprido:\n");
    scanf("%i%i%i%i%i", &r1, &r2, &r3, &r4, &r5);

    if(r1 == 1 && r2 == 1 && r3 == 1 && r4 == 1 && r5 == 1){
        printf("\nTodos os requisitos foram cumpridos, portanto, seu trabalho sera avaliado.");
    }
    else{
        printf("\nInfelizmente, seu trabalho nao cumpriu os requisitos necessarios para ser avaliado :(");
    }


return 0;

}