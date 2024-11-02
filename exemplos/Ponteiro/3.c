#include <stdio.h>

void troca (int *x, int * y){

    int aux = *x; //aux = 5
    *x = *y;      // a = 3
    *y = aux;     // b = 5

}

int main(){

    int a = 5, b = 3;

    troca (&a, &b); //chama a função troca e passa os respectivos endereços :D

    printf("%d %d", a, b);

    return 0;
}