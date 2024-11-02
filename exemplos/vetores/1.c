#include <stdio.h>

int main(){

    int vet[10], i, x, cont = 0;

    for(i = 0; i < 10; i++)
        scanf("%d", &vet[i]);
    
    printf("Entre com um numero x: ");
    scanf("%d", &x);

    for(i = 0; i < 10; i++){
        if(vet[i] == x){
            cont++;
        }
    }
    
    printf("%d apareceu %d vezes\n", x, cont);

return 0;

}