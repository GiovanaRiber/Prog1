#include <stdio.h>

int main(){

    int codigo, quantidade;
    float valor, desconto, valorFinal;

    printf("Exercicio 6\n\n");
    printf("Informe o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Informe a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch(codigo){
        case 1 : 
        valor = 5.30; break;
        case 2 : 
        valor = 6.00; break;
        case 3 : 
        valor = 3.20; break;
        case 4 : 
        valor = 2.50; break;
    }

    valorFinal = valor * quantidade;
    desconto = valorFinal * 0.15;

    if(valorFinal >= 40 || quantidade >= 15){
        valorFinal = valorFinal - desconto;
    }

    printf("\nO valor final a ser pago e: %.2f", valorFinal);

return 0;

}