#include <stdio.h>

int main(){

    int matriz[4][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {2, 1, 4, 3}, {3, 2, 4, 1}};
    int *ptr = &matriz[0][0];
    int x, count = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("\nValores da Matriz\n");
    for(int i = 0; i < 16; i++){
        printf("%d ", *(ptr+i));
        if(*(ptr+i) == x){
            count++;
        }
    }

    printf("\n\nO valor %d aparece %d vez(es) na matriz !", x, count);

return 0;
}