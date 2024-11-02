#include <stdio.h>

int main(){

    float X, Y, Z, media;
    int acima_media = 0;

    printf("Exercicio 2");
    printf("\n\nDigite tres numeros: ");
    scanf("%f%f%f", &X, &Y, &Z);

    media = (X+Y+Z)/3;
    
    if (X > media){
        acima_media = acima_media + 1;
    }
    if (Y > media){
        acima_media = acima_media + 1;
    }
    if (Z > media){
        acima_media = acima_media + 1;
    }

    printf("\nQuantidade de numeros acima da media: %d", acima_media);

return 0;

}