#include <stdio.h>

void verificacao(int vetx[], int vety[], int x) {
    int cont = 0;
    for (int i = 0; i < x; i++) {
        if (vetx[i] != vety[i]) {
            cont = 1;
            break;
        }
    }
    if (cont == 0) {
        printf("\nOs valores de A estao gravados em B !");
    } else {
        printf("\nERRO na gravação de valores !");
    }
}

int main() {

    int num;

    printf("Insira um valor inteiro positivo menor que 20: ");
    scanf("%d", &num);

    if(num > 20 || num <= 0) {

        printf("\nImpossivel prosseguir !");
        return 1;
    }

    int vetA[num];
    int vetB[num];

    printf("Insira uma sequencia de %d valores:\n\n", num);
    for (int i = 0; i < num; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetA[i]);
    }

    FILE *arq = fopen("vetor.bin", "wb");
    
    if (arq == NULL) {
        printf("\nERRO na criação do arquivo !");
        return 1;
    }

    fwrite(vetA, sizeof(int), num, arq);
    fclose(arq);

    arq = fopen("vetor.bin", "rb");
    if (arq == NULL) {
        printf("\nERRO na abertura do arquivo !");
        return 1;
    }

    fread(vetB, sizeof(int), num, arq);
    fclose(arq);

    verificacao(vetA, vetB, num);

    return 0;
}
