#include <stdio.h>

int main(){

    int fat, n;

    printf("Digite um valor inteiro: ");
    scanf("%i", &n);

    fat = 1;

    while ( n > 1){
        fat *= n;
        n--;
    }

    printf("\n%i", fat);

return 0;

}