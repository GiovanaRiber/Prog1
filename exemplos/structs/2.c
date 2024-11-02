#include <stdio.h>
#define MAX 2

struct cliente{

        int codigo;
        int diaNasc;
        char nome[50];
        int mesNasc;
        int anoNasc;

    };

int main(){

    struct cliente c[MAX];

    for(int i = 0; i < MAX; i++){
        printf("\nInsira os dados do cliente %d: ", i+1);
        scanf("%d%d%d%d", &c[i].codigo, &c[i].diaNasc, &c[i].mesNasc, &c[i].anoNasc);
        printf("Digite o nome: ");

        setbuf(stdin, NULL);
        fgets(c[i].nome, 50, stdin);
    }

    for(int i = 0; i < MAX; i++){
        printf("\nCliente %d: %d", i+1, c[i+1].codigo);
        printf("\nDia Nasc: %d", c[i].diaNasc);
        printf("\nMes Nasc: %d", c[i].mesNasc);
        printf("\nAno Nasx: %d", c[i].anoNasc);
        printf("\nNome: %s", c[i].nome);
    }

    return 0;
}