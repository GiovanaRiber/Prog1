#include <stdio.h>

int verif(int a){
    if(a > 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int num, y;

    scanf("%d", &num);
    y = (verif(num));
    
    if (y == 1){
        printf("\nNumero Positivo");
    }
    else{
        printf("\nNumero Negativo");
    }

return 0;
}