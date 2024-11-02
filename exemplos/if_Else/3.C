#include <stdio.h>

int main(){

int X;
    
    printf("Digite um numero: ");
    scanf("%d", &X);

    if (X >= 0){
        if (X % 2 == 0) {
            printf("Positivo par!");
        }
        else {
            printf("Positivo impar!");
        }
    }

    else{
        if (X % 2 == 0){
            printf("Negativo par!");
        }
        else{
            printf("Negarivo impar!");
        }
    }
return 0;

}