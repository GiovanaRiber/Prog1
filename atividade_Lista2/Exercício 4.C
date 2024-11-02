#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, r1, r2;
    printf("Digite tres valores: ");
    scanf("%f%f%f", &a, &b, &c);

    if( a == 0){
        printf("\nNao e uma funcao de segundo grau");
    }
    
    else{
        delta = pow(b,2) - 4 * a * c;
        
        if(delta > 0){
            r1 = (-b-sqrt(delta))/2*a;
            r2 = (-b+sqrt(delta))/2*a;
            printf("\nOs resultados sao: %f\n2%f", r1, r2);
        }

        else if(delta < 0){
            printf("\nNao existe uma raiz real");
        }
    }

return 0;

}