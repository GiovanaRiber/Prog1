#include <stdio.h>


int main(){

    char X;

    printf("Exercicio 1\n");
    printf("Digite um caractere: ");
    scanf("%c", &X);

    if (X == 'a'|| X == 'e'|| X == 'i' || X == 'o' || X == 'u'){
        printf("\nE uma VOGAL!");
    }
    else{
        printf("\nNao e VOGAL!");
    }

return 0;

}