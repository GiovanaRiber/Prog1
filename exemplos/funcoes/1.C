#include <stdio.h>
#include <math.h>

float calcula_area(float raio){
    return 3.14 * pow(raio,2);
}

int main(){

    float raio, area;

    printf("Informe o Raio da Circunferencia: ");
    scanf("%f", &raio);
    area = calcula_area(raio);
    printf("%f", area);

return 0;
}