#include <stdio.h>
#include <math.h>

void equacao(int a, int b, int c){
    int delta, r1, r2;
    if(a == 0){
        printf("Nao e uma raiz de segundo grau");
    }
    else{
        delta = pow(b,2) - 4 * a * c;
        if(delta > 0){
            r1 = (- b - sqrt(delta))/ 2 * a;
            r2 = (- b + sqrt(delta))/ 2 * a;

            printf("As raizes sao %d, %d", r1, r2);
        }
        else{
            printf("Nao existe raiz real!");
        }
    }
}

int main(){

    int a, b, c;

    printf("Informe o valor das raizes: ");
    scanf("%d%d%d", &a, &b, &c);

    equacao(a, b, c);

return 0;
}