#include <stdio.h>

int soma(int n){

    if (n == 0) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main(){

    int x;

    printf("Valor inteiro: ");
    scanf("%d", &x);

    printf("\nA soma e %d", soma(x));

    return 0;
}