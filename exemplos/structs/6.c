#include <stdio.h>

struct ponto{

    int x;
    int y;

};

struct ponto insere(void){

    struct ponto p;
    scanf("%d %d", &p.x, &p.y);

    return p;
};


void imprime(struct ponto p){

    printf("(%d, %d)\n", p.x, p.y);
}

int main(){

    struct ponto p1;
    
    struct ponto p;
    
    p = insere();
    imprime(p1);
    printf("(%d, %d)\n", p.x, p.y);


    return 0;
}