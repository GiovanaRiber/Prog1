#include <stdio.h>

int tabuada(int num){
    int cont, n;
    for(cont=1; cont<=10; cont++){
        n = num * cont;
        printf("\n%d x % d = %d", cont, num, n);
    }
    return 0;
}

int main(){

    int num;

    printf("Exercicio 7\n\n");
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    printf("\n%d\n", tabuada(num));
return 0;
}