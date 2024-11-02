#include <stdio.h>

int area(float a, float b){
    return a * b;
}

int main(){

    float compr, larg, r;

    printf("Informe o comrimento e a largura (repectivamente): ");
    scanf("%f%f", &compr, &larg);

    r = area(compr, larg);

    printf("A area e %2.f", r);

    

return 0;
}