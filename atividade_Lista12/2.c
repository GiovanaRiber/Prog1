#include <stdio.h>

struct cadastro {
    
    char nome[100];
    int registro;
    float preco;
};

int main() {

    FILE *arq = fopen("arquivo.txt", "r");

    if (arq == NULL) {

        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    struct cadastro livro;

    printf("Dados do arquivo:\n");

    while (fscanf(arq, "%99[^;];%d;%f\n", livro.nome, &livro.registro, &livro.preco) == 3) {
        printf("Titulo: %s\n", livro.nome);
        printf("Numero de registro: %d\n", livro.registro);
        printf("Preco: R$ %.2f\n", livro.preco);
        printf("\n");
    }

    fclose(arq);
    return 0;
}
