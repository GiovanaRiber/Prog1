#include <stdio.h>
#define t 10

int main() {
    int i, vet[t], p = 0, im = 0;

    printf("Digite os valores em sequencia: ");

    for (i = 0; i < t; i++) {
        scanf("%d", &vet[i]);

    if (vet[i] % 2 == 0) {
      p++;
    }

    else if(vet[i] % 2 != 0) {
      im++;
    }

    }
    int par[p], impar[im];
    int x = 0, y = 0;
    
    for (i = 0; i < t; i++) {
        if (vet[i] % 2 == 0) {
        par[x] = vet[i];
        x++;

        }
        else{
        impar[y] = vet[i];
        y++;
        }
    }
        printf("____________________________________________\n");
        printf("Existem %d numeros impares e %d pares!\n", im, p);

        printf("impares:\n");
        for(i = 0; i<im; i++){
            printf("%d ", impar[i]);
        }

        printf("\npares:\n");
        for(i = 0; i<p; i++){
            printf("%d ", par[i]);
        }


return 0;
}