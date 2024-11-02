#include <stdio.h>

int main(){

    char frase[16];
    printf("Digite uma frase: ");
    fgets(frase, 16, stdin);
    setbuf(stdin, NULL);
    printf("%s\n", frase);

    printf("Digite a frase novamente: ");
    gets(frase);

    printf("%s\n", frase);



return 0;
}
