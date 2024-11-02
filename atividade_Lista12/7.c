#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(){

    int vet[MAX];
    int soma = 0;

    printf("Insira uma sequencia de %d valores: \n", MAX);
    for(int i = 0; i < MAX; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    FILE *arq = fopen("valores.bin", "wb");
    
    if (arq == NULL) {
        printf("\nERRO na criacao do arquivo !");
        return 1;
    } 

    fwrite(vet, sizeof(int), MAX, arq);
    
    fclose(arq);

    arq = fopen("valores.bin", "rb");
    if (arq == NULL) {
        printf("\nERRO na abertura do arquivo para leitura !");
        return 1;
    } 

    for (int i = 0; i < MAX; i++) {
        int n;
        fread(&n, sizeof(int), 1, arq);
        soma += n;
    }

    printf("SUCESSO!");
    fclose(arq);

    printf("\nA soma dos valores do vetor e %d !", soma);

    return 0;
}
