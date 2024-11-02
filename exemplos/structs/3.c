#include <stdio.h>
#define MAX 1

struct Data{

    int mesNasc;
    int anoNasc;
    int diaNasc;
    
};

struct cliente{

        int codigo;
        char nome[50];
        struct Data data;

    };


int main(){

    struct cliente c[MAX];

    for(int i = 0; i < MAX; i++){
        printf("\nInsira o codigo e a data de nascimento [dd/mm/aa] do cliente %d: ", i+1);
        scanf("%d%d%d%d", &c[i].codigo, &c[i].data.diaNasc, &c[i].data.mesNasc, &c[i].data.anoNasc);
        printf("\nDigite o nome: ");

        setbuf(stdin, NULL);
        fgets(c[i].nome, 50, stdin);
    }

    printf("\n==============================================\n");

    for(int i = 0; i < MAX; i++){
        printf("\nCliente %d: %d", i+1, c[i].codigo);
        printf("\nNome: %s", c[i].nome);
        printf("\nData de nascimendo do cliente %d: %d/%d/%d", i+1, c[i].data.diaNasc, c[i].data.mesNasc, c[i].data.anoNasc);
    }

    return 0;
}