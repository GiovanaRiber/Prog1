#include <stdio.h>

void binario (int num) {

    if (num > 0) {

        binario(num/2);
        printf("%d", num % 2);

    }
}

int main(){

    int num;

    printf("Insira um valor inteiro: ");
    scanf("%d", &num);

    printf("\n%d em binario e: ", num);

    if(num == 0) {

        printf("0");
    } else {
        binario(num);

    }

    return 0;
}