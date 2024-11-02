#include <stdio.h>

int main(){

    int den = 0, n = 1;
    float s = 0;

    printf("Exercicio 4\n\n");
    while(n <= 99 && den <= 50){
        den++;
        printf("\n%d/%d", n, den);
        s = s + ((float)n/den);
        s++;
        n = n + 2;
    }  

    printf("\n\nA soma de todos os valores e: %.2f", s);

return 0;

}