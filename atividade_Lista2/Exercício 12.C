#include <stdio.h>

int main(){

    int a, b, c;

    printf("Exercicio 12\n\n");
    printf("Digite tres numeros inteiros:\n");   
    scanf("%i%i%i", &a, &b, &c);

    

    if(a > b && b > c){
        printf("\nEm ordem decrescente:\n%i\n%i\n%i", a, b, c);
    }
        else if(a > c && c > b){
        printf("\nEm ordem decrescente:\n%i\n%i\n%i", a, c, b);
        }

        else if(b > a && a > c){
        printf("\nEm ordem decrescente:\n%i\n%i\n%i", b, a, c);
        }

        else if(b > c && c > a){
        printf("\nEm ordem decrescente:\n%i\n%i\n%i", b, c, a);
        }

        else if(c > b && b> a){
        printf("\nEm ordem decrescente:\n%i\n%i\n%i", c, b, a);
        }

    else{
        printf("\nEm ordem decrescente:\n%i\n%i\n%i", c, a, b);
    }
return 0;

}