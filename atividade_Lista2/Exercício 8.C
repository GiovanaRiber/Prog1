#include <stdio.h>

int main(){

    int codigo;
    float resultado, x, y;

    printf("Exercicio 8\n\n");
    printf("Digite dois numeros:\n");
    scanf("%f%f", &x, &y);
    printf("\nInforme o codigo da operacao: ");
    scanf("%i", &codigo);

    switch(codigo){
    case 1:
        resultado = (x + y)/2;
        printf("\nA media aritmetica e: %.2f", resultado); break;
    case 2:
        if(x > y){
            resultado = x - y;
        }
        else{
            resultado = y - x;
        }
        printf("\nA diferenca e: %.2f", resultado); break;
    case 3:
        resultado = x * y;
        printf("\nO produto e: %.2f", resultado); break;
    case 4:
        resultado = x / y;
        printf("\nO resultado da divisao e: %.2f", resultado); break;    
     }
return 0;

}