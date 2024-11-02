#include <stdio.h>

int main(){

    int x, y, menor;
    scanf("%d%d",&x, &y);
        
    menor = (x < y) ? x : y;

    printf("%d", menor);

return 0;

}