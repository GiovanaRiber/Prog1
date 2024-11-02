#include <stdio.h>

int main(){

    float saldoMedio, credito;

    printf("Exercicio 13\n\n");
    printf("Qual foi seu saldo medio no ultimo ano?\n");
    scanf("%f", &saldoMedio);

    if(saldoMedio >= 400){
        credito = saldoMedio * 0.30;
    }

        else if(saldoMedio >= 300){
        credito = saldoMedio * 0.25;
        }

        else if(saldoMedio > 200){
        credito = saldoMedio * 0.20;
        }
     
    else{
        credito = saldoMedio * 0.10;
    }

    printf("\nSeu credito e: %.2f", credito);

return 0;

}