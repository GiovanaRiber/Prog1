#include <stdio.h>

int main(){

    int x, y;

    printf("Exercicio 2\n\n");
    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &x, &y);

    while(x < y){
        if(x % 5 == 2 || x % 5 == 3){
            printf("%d ", x);    
        }
        x++;
    }

return 0;

}