#include <stdio.h>

int main(){

    int x = 5;
    int *p1, *p2;

    p1 = &x;
    printf("%d\n", *p1);
    
    //atribuição de ponteiros
    p2 = p1;

    printf("%d\n", *p2);
    //Soma e Subtração são as únicas operações possíveis com ponteiros

return 0;
}