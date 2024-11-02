#include <stdio.h>

struct ponto{

    int x;
    int y;

};

void insere(struct ponto *p){

    scanf("%d %d", &p -> x, &p -> y);

}


void imprime(struct ponto p){

    printf("(%d, %d)\n", p.x, p.y);

}

int main(){

    /*struct ponto p;
    struct ponto *pp = &p;

    (*pp).x = 3;
    (*pp).y = 4;*/

    struct ponto p1;
    insere(&p1);
    imprime(p1);

    return 0;
}