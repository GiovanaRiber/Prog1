#include <stdio.h>

struct cliente{

        int codigo;
        int diaNasc;
        char nome[50];
        int mesNasc;
        int anoNasc;

    }c1, c2;

int main(){

    /*c1.codigo = 101;
    c1.diaNasc = 14;
    c1.mesNasc = 2;
    c1.anoNasc = 2000;*/

    /*structs c1 = {101, 14, 2, 200}; = outra forma de declarar valores*/

    printf("\nInsira os dados: ");
    
    setbuf(stdin, NULL);
    scanf("%d%d%d%d", &c1.codigo, &c1.diaNasc, &c1.mesNasc, &c1.anoNasc);
    setbuf(stdin, NULL);
    fgets(c1.nome, 50, stdin);

    printf("\n%d", c1.codigo);
    printf("\n%s", c1.nome);

    return 0;
}