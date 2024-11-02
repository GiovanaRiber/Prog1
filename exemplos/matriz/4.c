#include <stdio.h>
#define MAX 4

int main(){

    int i, j;
    float A[MAX][MAX];

    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
        printf("Entre com as notas [%d %d]: ", i, j);
        scanf("%f", &A[i][j]);
        }
    } 



return 0;
}