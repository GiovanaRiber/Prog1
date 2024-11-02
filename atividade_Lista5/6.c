#include <stdio.h>
#define x 5

void multiplos(int vet[]){
    int i, cont;

    printf("\nOs multiplos sao: ");
    for(i = 0; i < x; i++){
        if(vet[i] % 7 == 0){
            cont++;
            printf("%d ", vet[i]);
        }
    }

}

int main(){

    int vet[x], cont;
    
    for(cont = 0; cont < x; cont++){
        printf("Numero %d: ", cont);
        scanf("%d", &vet[cont]);
    }

    multiplos(vet);

return 0;
}