#include <stdio.h>
int calculo(int x, int n){
    int cont, r = 1;
    for(cont = 1; cont <= n; cont++){
         r = r * x;
    }
    return r;
}

int main(){

    int x, n, r;

    printf("Exercicio 4\n\n");
    printf("Informe dois valores inteiros: ");
    scanf("%d%d", &x, &n);

    r = calculo(x, n);

    printf("\nO resultado de %d elevado a %d e: %d", x, n, r );
    
return 0;
}