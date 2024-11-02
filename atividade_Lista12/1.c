#include <stdio.h>

struct cadastro {

    char nome[100];
    int registro;
    float preco;
};

int main() {

    FILE *arq = fopen("arquivo.txt", "w");
    
    if (arq == NULL) {
        printf("ERRO ao abrir o arquivo !\n");
        return 1;
    }

    struct cadastro livro;

    printf("Insira os dados dos livros:\n");

    for (int i = 0; i < 2; ++i) {

        printf("\n=========================\n");
        printf("Livro %d\n", i + 1);
        printf("Titulo: ");
        scanf("%s", livro.nome);
        printf("Numero de registro: ");
        scanf("%d", &livro.registro);
        printf("Preco: ");
        scanf("%f", &livro.preco);
        printf("=========================\n");

        fprintf(arq, "%s;%d;%.2f\n", livro.nome, livro.registro, livro.preco);
    }

    fclose(arq);

    return 0;
}
