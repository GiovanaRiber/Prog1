#include <stdio.h>

void gravar(int vet[], int x) {

    FILE *arq = fopen("vetor.txt", "w");

    if (arq == NULL) {
        printf("ERRO ao abrir o arquivo !\n");
        return;
    }

    for (int i = 0; i < x; i++) {
        fprintf(arq, "%d\n", vet[i]);
    }

    fclose(arq);
}

void exibir() {

    FILE *arq = fopen("vetor.txt", "r");
    
    if (arq == NULL) {
        printf("ERRO ao abrir o arquivo !\n");
        return;
    }

    printf("\nConteudo do arquivo:\n\n");

    int x;

    while (fscanf(arq, "%d", &x) != EOF) {
        printf("%d\n", x);
    }

    fclose(arq);
}

int main() {

    int num;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &num);

    int vet[num];

    printf("\nInsira os %d valores do vetor:\n\n", num);
    for (int i = 0; i < num; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    gravar(vet, num);
    exibir();

    return 0;
}
