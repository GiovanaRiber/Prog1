#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main () { 

    float Area, Perimetro, Raio;

        printf("Exercicio 1\n");
        printf("\nColoque o raio: ");
        scanf("%f", &Raio);

        Perimetro= (2 * pi * Raio);
        Area= (pi * pow(Raio,2));
        printf("\nO Perimetro e: %.2f", Perimetro);
        printf("\n\nA area e: %.2f", Area);
        return 0;

}