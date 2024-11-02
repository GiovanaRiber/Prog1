#include <stdio.h>

int main(){

    float a,c,b;

    printf("Exercicio 5\n\n");
    printf("Informe tres lado de um triangulo:\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a != b && b != c && a != c){
        printf("\nEsse triangulo e: ESCALENO!");
    }

    if(a == b && b == c){
        printf("\nEsse triangulo e: EQUILATERO!");
    }
    
    else{ 
        printf("\nEsse triangulo e: ISOSCELES!");
    }

return 0;

}