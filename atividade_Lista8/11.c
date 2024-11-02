#include <stdio.h>
#define MAX 100

int total(char *string){

    int count = 0;

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' '){
            count++;
        }
    }
    return count + 1;
}

int main(){

    char string[MAX];

    printf("Digite um string: ");
    fgets(string, MAX, stdin);

    printf("\nExistem um total de %d palavra(s) na string !", total(string));

    return 0;
}