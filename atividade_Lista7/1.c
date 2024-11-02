#include <stdio.h>
#define MAX 200

int main(){

    char frase[MAX], frase2[MAX];
    int i, cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);

    for(i = 0; frase[i] != '\0'; i++){
        cont++;
    }

    printf("%d", cont);

    for(i = 0; frase[i] != '\0'; i++){
        frase2[cont - 1] = frase[i];
        cont--;
    }

    frase2[i] = '\0';

    printf("%s", frase2);

return 0;
}