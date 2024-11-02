#include <stdio.h>

void gravar(int x, int matriz[x][x]) {

    FILE *arq = fopen("matriz.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            fprintf(arq, "%d ", matriz[i][j]);
        }
        fprintf(arq, "\n");
    }
    fclose(arq);
}

int main() {

    int x;

    printf("Insira a dimensao matriz quadrada: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Numero de linhas invalido.\n");
        return 1;
    }

    int matriz[x][x];

    printf("\nInsira as posicoes da matriz:\n\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    gravar(x, matriz);

    return 0;
}
