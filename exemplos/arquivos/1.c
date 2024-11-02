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

int main(){

    FILE *file;
    char letra;

    file = fopen("conto.txt","wb");
 
    if (file) {
        printf("Digite um texto: ");
        scanf("%c", &letra);

        while(letra != '\n') { //enquanto for diferente de enter, o laço continua.
            fputc(letra, file); //fputc = escreve catactere por caractere
            scanf("%c", &letra);
        }

        rewind(file); //voltar o ponteiro do arquivo para o inicio.

        printf("\nTexto lido do arquivo:\n");
        while(!feof(file)) { // exibir o texto escrito.
            letra = fgetc(file);
            printf("%c", letra);
        }

        fclose(file);

    } else {
        printf("\nERRO\n");
    }


    return 0;
}