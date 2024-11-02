#include <stdio.h>

int mult(int x, int y){

    if (x == 0 || y == 0) {
        return 0;

    } else if (y == 1) {
        return x;

    } else {
        return (x + mult(x, y - 1));
    }
}

int main(){

    int x, y;

    printf("Insira dois valors inteiros: ");
    scanf("%d%d", &x, &y);

    printf("\nO resultado de %d X %d e igual a %d !", x, y, mult(x, y));

    return 0;
}