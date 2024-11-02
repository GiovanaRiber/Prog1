#include <stdio.h>
#define MAX 100

int main(){

    char matriz[5][MAX];
    int i, j;

    for(i = 1; i <= 5; i++){
        printf("\nLinha %d: ", i);
        fgets(matriz[i], MAX, stdin);
    }

    for(i = 1; i <= 5; i++){
        printf("%s\n", matriz[i]);
    }
    



return 0;
}
