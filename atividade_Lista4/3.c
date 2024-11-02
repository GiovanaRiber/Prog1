#include <stdio.h>
#include <math.h>

int calculaDelta(float a, float b, float c){
    
    return pow(b,2)-4*a*c;
    }

    float calculaRaizes(float a, float b, float delta, int op){
    if(op == 1){
        return (-b-sqrt(delta))/(2*a);   
    }
    else{
        return (-b+sqrt(delta))/(2*a);
    }
}

int main(){

    float a, b, c, delta;

    printf("Exercicio 3\n\n");
    printf("Informe tres valores: ");
    scanf("%f%f%f", &a, &b, &c);
    
    if(a == 0){
        printf("\nNao e uma funcao de segundo grau");
        return 0;
    }
    else{
        delta = calculaDelta(a, b, c);
    }

    if(delta < 0){
        printf("\nNao e uma raiz real");
    }
    else{
        printf("x' = %.2f\n", calculaRaizes(a, b, delta, 1));
        printf("X'' = %.2f\n", calculaRaizes(a, b, delta, 0));
    }

return 0;
}