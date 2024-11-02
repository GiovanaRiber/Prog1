#include <stdio.h>
#include <math.h>

int main(){

    float Massa, Altura, IMC;

        printf("Exercicio 3\n\n");
        printf("Qual a sua massa(Kl)?: ");
        scanf("%f", &Massa);
        printf("\nQual sua altura(m)?: ");
        scanf("%f", &Altura);

        IMC = Massa/pow(Altura,2);
        printf("\nSeu IMC e: %.2f", IMC);
        return 0;

}