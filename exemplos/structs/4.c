#include <stdio.h>

struct ponto{

    int x;
    int y;

};

struct novoPonto{

    int x;
    int y;

};

int main(){

    struct ponto p1 = {1, 2};
    struct ponto p2;
    struct novoPonto p3 = {3, 4};

    p2 = p1;

    printf("p1 = (%d, %d)\n", p2.x, p2.y);
    printf("p3 = (%d, %d)\n", p3.x, p3.y);

    return 0;
}