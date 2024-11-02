#include <stdio.h>

int main(){

    int num, s = 0, cont = 1;

    printf("Exercicio 10\n\n");
    printf("Digite valores inteiros: ");

    while(num != 0){
        scanf("%i", &num);
        if(num > 10 && num < 50 && num % 7 == 0){
            s++;
        }
        cont++;
    }

    printf("\nResposta: %i", s);

return 0;

}