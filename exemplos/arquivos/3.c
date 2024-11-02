#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    FILE *file = fopen(f, "w");
    char texto[500];

    if (file) {
        
        printf("Digite uma frase ou 1 caracter para finalizar:\n");
        scanf("%500[^\n]", texto); //configuração para que não seja lido até o espaço, mas sim até os caracteres definidos.
        scanf("%*c");

        while(strlen(texto) > 1) { //laço vai se repetir até que o usuário digite apenas um caracter
            fputs(texto, file);
            fputc('\n', file);
            scanf("%500[^\n]", texto);
            scanf("%*c");
        }
        fclose(file);
        
    } else {
        printf("\nERRO ao abrir o arquivo !\n");
    }


}

int main() {

    char nome[] = {"textinho.txt"};

    escrita(nome);


    return 0;
}