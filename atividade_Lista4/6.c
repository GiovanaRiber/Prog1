#include <stdio.h>

float imc(float peso, float altura){
    float imc;
    imc = peso/(altura * altura);
    if(imc < 18.5){
        printf("Abaixo do peso");
        return imc;
    }

    else if(imc < 25){
        printf("Peso Normal");
        return imc;
    }

    else if(imc < 30){
        printf("Sobrepeso");
        return imc;
    }

    else if(imc > 30.1){
        printf("Obeso");
        return imc;
    }
}

int main(){

    float peso, altura;

    printf("Exercicio 6\n\n");
    printf("Informe seu peso, e sua altura respectivamente: ");
    scanf("%f%f", &peso, &altura);

    printf("\n%.2f\n", imc(peso, altura));

return 0;
}