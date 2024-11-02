#include <stdio.h>

int main(){

float Velocidade_Via, Velocidade_Veiculo, Diferenca;
float multa = 0;
int pontos = 0;
    scanf("%f%f", &Velocidade_Via, &Velocidade_Veiculo);
        Diferenca = Velocidade_Veiculo / Velocidade_Via;
    if (Diferenca <= 1.2){
        multa = 130.16;
        pontos = 4;
    }
        else if (Diferenca <= 1.5){
            multa = 195.23;
            pontos = 5;
        }
    else {
        multa = 880.41;
        pontos = 7;
    }
 printf("\n%.2f\n%i", multa, pontos);
return 0;

}