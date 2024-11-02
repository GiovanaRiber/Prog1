#include <stdio.h>

int main(){

    int Valor, Troco;

    printf("Exercicio 7\n");
    printf("\nValor em dinheiro: ");
    scanf("%d", &Valor);

    Troco= Valor%7;
    printf("\nO valor que sera perdido: %d", Troco);
    return 0;

}