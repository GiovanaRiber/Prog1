#include <stdio.h> 

int primo(int x){

    int cont, div;
    div = 0;

    for(cont = 1; cont <= x; cont++){
        if(x % cont == 0){
            div++;
        }
    }

    if(div==2){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){

    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    if(primo(n) == 1){
        printf("\nO numero %d e primo", n);
    }
    else{
        printf("\nO numero %d nao e primo", n);
    }

return 0.;
}