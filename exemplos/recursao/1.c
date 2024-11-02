#include <stdio.h>

int fatorial(int n){

    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }

}

int main(){

    int x;
    printf("Valor inteiro: ");
    scanf("%d", &x);

    //fatorial(x);

    printf("\nFatorial de %d! e igual a %d", x, fatorial(x));
    return 0;
}