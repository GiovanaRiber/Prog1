#include <stdio.h>

int main(){
    
    int n, cont, aux, a, b;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);

    float vet[n];

    for(cont = 0; cont < n; cont++){
        printf("Numero:");
        scanf("%f", &vet[cont]);
    }

    for(a = 0; a < n; a++){
        for(b = a; b < n; b++){
            if(vet[a] > vet[b]){
                aux = vet[a];
                vet[a] = vet[b];
                vet[b] = aux; 
            }
        }
    }
    printf("\nNumeros ordenado:\n");
    for(cont = 0; cont < n; cont++)
        printf("%.1f\n", vet[cont]);

return 0;
}