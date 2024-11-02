#include <stdio.h>
#include <math.h>

struct ponto{

    float x;
    float y;

};

float coordenada(struct ponto p1, struct ponto p2){

    float distancia;

    distancia = sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));

    return distancia;
}

int main(){

    struct ponto p1, p2;

    printf("\nInsira as coordedas do ponto A: ");
    scanf("%f%f", &p1.x, &p1.y);
    printf("\nInsira as coordenadas no ponto B: ");
    scanf("%f%f", &p2.x, &p2.y);

    printf("\nA distancia entre os ponto A e B e %.2f !", coordenada(p1, p2));

    return 0;
}