#include <stdio.h>

void par(int num){

    if (num < 0) {

        return;

    } else {
        if (num % 2 == 0) {

            printf("[%d]", num);
            par(num - 2);

        }
    }
}

int main(){

    int x;

    printf("Insira um inteiro par: ");
    scanf("%d", &x);

    if (x % 2 != 0 || x < 0){

        printf("\nNao e par!");

    } else {

        printf("\n");
        par(x);
    }

    return 0;
}