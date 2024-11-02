#include <stdio.h>

int main(){

    int veiculo;
    float km, consumo;

    printf("Exercicio 14\n\n");
    printf("Qual a extensao do trajeto a ser percorrido?:\n");
    scanf("%f", &km);
    printf("Escolha o veiculo: ");
    scanf("%i", &veiculo);

    switch(veiculo){
        case 1:
        consumo = km/15; break;

        case 2:
        consumo = km/12; break;
    
        case 3:
        consumo = km/10; break;
    }

    printf("\nO consumo estimado de combustivel em litros sera de:\n%.2f", consumo);

return 0;

}