#include <stdio.h>

int potencia (int x, int n) {

    if (n == 0) {
        return 1;

    } else if (n == 1) {
        return x;

    } else {
        return (x * potencia(x, n - 1));

    }

}

int main(){

    int x, n;

    printf("Insira dois valores inteiros: ");
    scanf("%d%d", &x, &n);

    printf("\nO resultado %d elevado a %d e: %d !", x, n, potencia(x, n));

    return 0;
}