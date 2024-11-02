#include <stdio.h>

int main(){

    int cont, x, r;
    
    printf("Digite um numero:\n");
    scanf("%i",&x);
    cont = 1;
    
    do{
        r = x*cont;
        printf("\n%i x %i = %i", cont, x, r);
        cont++;
    } while (cont <= 10);

return 0;

}