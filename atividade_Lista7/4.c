#include <stdio.h>
#define MAX 200

int main(){

    char string[MAX], string2[MAX];
    int tam = 0, tam2 = 0, i;

    printf("Digite uma string: ");
    fgets(string, MAX, stdin);
    printf("\nDigite outra string: ");
    fgets(string2, MAX, stdin);

    for(i = 0; string[i] != '\0'; i++){
        tam++;
    }

    for(i = 0; string2[i] != '\0'; i++){
        tam2++;
    }

    for(i = 0; string[i] != '\0'; i++){
        if(tam == tam2 && string[i] == string2[i]){
            printf("\nAs strings sao iguais!");
            break;
        }
        else{
            printf("\nAs strings sao diferentes!");
            break;
        }
    }



return 0;
}