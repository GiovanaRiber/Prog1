#include <stdio.h>
#include <stdlib.h>

/*
    Modo de abertura de arquivos:
    w -> escrita
    r -> leitura
    a -> anexar mais conteúdo
    r+ -> leitura e escrita
    w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
    a+ -> leitura e escrita (adiciona ao final do arquivo)

*/

void escrita (char f[]) {

    FILE *file = fopen(f, "w"); //escrita
    char letra;

    if (file) {

        printf("Digite um texto e pressione ENTER para finalizar: ");
        scanf("%c", &letra);

        while(letra != '\n') { //enquanto for diferente de enter, o laço continua.
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);

    } else {
        printf("\nERRO ao abrir arquivo !");
    }

}

void leitura (char f[]) {
    
    FILE *file = fopen(f, "r"); //leitura
    char letra;

    if (file) {

        printf("\nTexto lido do arquivo:\n");
        while(!feof(file)) { // exibir o texto escrito.
            letra = fgetc(file);
            printf("%c", letra);
        }

    } else {
        printf("\nERRO ao abrir arquivo !");
    }

}

int main(){

    char nome[] = {"conto.txt"}; //vetor de letras

    escrita(nome);
    leitura(nome);

    return 0;
}