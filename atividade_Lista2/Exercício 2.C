#include <stdio.h>

int main(){

    int X, Y, Z, menor;

    printf("Exercicio 2");
    printf("\nDigite tres numeros inteiros:\n ");
    scanf("%d%d%d", &X, &Y, &Z);

        menor = X;
    if  (Y < menor){
        menor = Y;
    }
    
    if (Z < menor){
        menor = Z;
    }

    printf("\nO menor numero dentre os tres e:%d", menor);

return 0;

}