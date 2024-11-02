#include <stdio.h>

int main(){

    float x, y;
    
    printf("Exercicio 9\n\n");
    printf("Informe as cordenadas(x,y):\n");
    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0){
        printf("\nR: Quadante 1");     
    }
        else if(x < 0 && y > 0){
            printf("\nR: Quadrante 2");
        }
        else if(x < 0 && y < 0){
            printf("\nR: Quadrante 3");
        }
    else{
        printf("\nR: Quadrante 4");
    }

return 0;

}