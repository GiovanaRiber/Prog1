#include <stdio.h>
#include <stdlib.h>

struct cadastro{

    int codigo;
    char titulo[50];
    char assunto[100];

};

int busca(struct cadastro *c, int x, int n){

    for(int i = 0; i < x; i++){

        if(c[i].codigo == n){
            return 1;
        }
    }
    return 0;
}

int main(){

    int x, i;

    printf("Insira a quantidade de livros a serem cadastrados: ");
    scanf("%d", &x);

    struct cadastro *c = (struct cadastro *) malloc(x * sizeof(struct cadastro));

    if(c == NULL){
        printf("\nErro: mamoria insificiente\n");
        exit(1);
    }

    for(i = 0; i < x; i++){
        printf("\nInsira o codigo do livro: ");
        scanf("%d", &c[i].codigo);

        printf("Insira o nome do livro: ");
        setbuf(stdin, NULL);
        fgets(c[i].titulo, 50, stdin);

        printf("Insira o assunto: ");
        setbuf(stdin, NULL);
        fgets(c[i].assunto, 100, stdin);

    }

    printf("\nLIVROS CADASTRADOS\n");
    for(i = 0; i < x; i++){

        printf("=================================\n");
        printf("Codigo: %d", c[i].codigo);
        printf("\nTitulo: %s", c[i].titulo);
        printf("Assunto: %s", c[i].assunto);
        printf("=================================\n\n");
    }

    int n;

    printf("\nInsira o codigo desejado: ");
    scanf("%d", &n);

    int r = busca(c, x, n);

    if(r == 1){
        printf("O livro corresponde ao codigo %d foi encontrado !", n);
    }
    else{
        printf("O livro corresponde ao codigo %d nao foi encontrado !", n);
    }

    free(c);

    return 0;
}