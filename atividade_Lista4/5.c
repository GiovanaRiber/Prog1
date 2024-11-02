#include <stdio.h>
#include <ctype.h>

float expr(float n1, float n2, char x){
    float num;
    switch(x){
        case 'a':
        return (n1 + n2)/2;

        case 'p':
        return ((n1*2)+(n2*2))/4;

        case 'h':
        num = 1/n1 + 1/n2;
        return ((n1+n2)/num);
    }
}

int main(){

    float n1, n2;
    char x;

    printf("Exercicio 5\n\n");
    printf("Informe as duas notas: ");
    scanf("%f%f", &n1, &n2);
    printf("Informe o codigo da operacao: ");
    scanf(" %c", &x);

    printf("\nA media e: %.2f", expr(n1, n2, x));

return 0;
}