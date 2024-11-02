#include <stdio.h>

char vogal(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
        printf("\nE uma vogal!");
        return 1;
    }
    else{
        printf("\nNao e uma vogal!");
        return 0;
    }
}

int main(){

    char v;

    printf("Digite uma letra: ");
    scanf(" %c", &v);

    printf("%c", vogal(v));

return 0;
}