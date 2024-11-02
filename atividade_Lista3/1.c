#include <stdio.h>

int main(){

    int x, y, cont;

    printf("Exercicio 1\n\n");
    printf("Digite dois valores inteiros:\n");
    scanf("%d%d", &x, &y);

    cont = x + 1;

    while(cont < y){ 
        if(cont % 2!= 0){
            printf("%d ", cont);    
        }   
        cont++;  
    }     

return 0;

}