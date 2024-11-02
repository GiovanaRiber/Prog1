#include <stdio.h>

int main(){

    int cont, num, r;

    printf("Exercicio 8\n\n");
    for(cont = 1; cont <= 10; cont++){
        for(num = 1; num <= 10; num++){
        r = num * cont;
        printf("\n%i x %i = %i", cont, num, r);   
        }
    }

return 0;

}