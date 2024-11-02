#include <stdio.h>

int soma(int *p, int n){
    
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += p[i]; // usando p como um array por meio do índice
    }

    return soma;

}

int main(){

    int vet[] = {5, 6, 7, 8, 9};

    printf("Soma: %d\n", soma(vet, 5));//Chama a função passando como parâmetro vet

return 0;
}