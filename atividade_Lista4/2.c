#include <stdio.h>

int primo(int n){
    int cont, div = 0;
    for(cont = 1; cont <= n; cont++){
        if(n % cont == 0){
            div++;
        }
    }

    if(div == 2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int num, r;

    printf("Exercicio 2\n");
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &num);

    r = primo(num);

    if(r==1){
        printf("\nE um numero primo.");
    }
    else{
        printf("\nNao e um numero primo.");
    }

return 0;
}