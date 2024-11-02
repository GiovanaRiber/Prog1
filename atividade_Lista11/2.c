#include <stdio.h>

void par(int cont, int num){

    if (cont > num) {
        return;

    } else {
        if (cont % 2 == 0) {

            printf("[%d]", cont);
            par(cont + 2, num);
        }
    }
}

int main(){

    int x, cont = 0;

    printf("Insira um inteiro par: ");
    scanf("%d", &x);

    if (x % 2 != 0 || x < 0){

        printf("\nNao e par!");
    } else {

        printf("\n");
        par(cont, x);
    }

    return 0;
}