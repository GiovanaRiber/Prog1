#include <stdio.h>

int main() {

    char nome1[] = "arq1.txt";
    char nome2[] = "arq2.txt";
    char nome3[] = "arq3.txt";

    FILE *arq1, *arq2, *arq3;

    arq1 = fopen(nome1, "w");
    arq2 = fopen(nome2, "w");

    if (arq1 == NULL || arq2 == NULL) {
        printf("ERRO ao abrir os arquivos !.\n");
        return 1;
    }

    fprintf(arq1, "A dona aranha subiu pela parede.\n");
    fclose(arq1);

    fprintf(arq2, "Veio a chuva forte e a derrubou.\n");
    fclose(arq2);

    arq1 = fopen(nome1, "r");
    arq2 = fopen(nome2, "r");

    if (arq1 == NULL || arq2 == NULL) {
        printf("Erro com o arquivio !.\n");
        return 1;
    }

    arq3 = fopen(nome3, "w");

    if (arq3 == NULL) {
        printf("Erro com o arquivio !.\n");
        return 1;
    }

    char x;

    while ((x = fgetc(arq1)) != EOF) {
        fputc(x, arq3);
    }

    while ((x = fgetc(arq2)) != EOF) {
        fputc(x, arq3);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    printf("\nConteudo do terceiro arquivo:\n");

    arq3 = fopen(nome3, "r");
    
    if (arq3 == NULL) {
        printf("Erro com o arquivio !.\n");
        return 1;
    }

    while ((x = fgetc(arq3)) != EOF) {
        printf("%c", x);
    }
    fclose(arq3);

    return 0;
}
