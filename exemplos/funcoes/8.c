#include <stdio.h>

float opera(float a, float b, char x){
    float num;
    switch(x){
        case 'a':
            return (a + b)/2;
        case 'p':
            return (a * 3) + (b * 2)/5;
        case 'h':
            num = 1/a + 1/b;
            return ((a+b)/num);
    }
}

int main(){

    float n1, n2;
    char x;

    printf("Digite as notas: ");
    scanf("%f%f", &n1, &n2);
    printf("\nDigite o codigo da operacao: ");
    scanf(" %c", &x);

    printf("\nA media e: %.2f", opera(n1, n2, x));

return 0;
}