#include <stdio.h>

void par(int x){

    if (x % 2 == 0){
        printf("%d e um numero par", x);
    }
    else{
        printf("%d e um numero  impar", x);
    }

}

int main(){

    int n;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    par(n);


return 0;
}