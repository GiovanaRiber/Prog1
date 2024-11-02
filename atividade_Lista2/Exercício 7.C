#include <stdio.h>

int main(){
    
    int codigo;
    float salario, reajuste;

    printf("exercicio 7\n\n");
    printf("Informe o codigo do seu cargo:");
    scanf("%d", &codigo);
    printf("\nInforme o seu salario: ");
    scanf("%f", &salario);

    switch(codigo){
        case 1: 
            reajuste = salario * 0.10;
            salario = salario + reajuste; break;
        case 2:
            reajuste = salario * 0.07; 
            salario = salario + reajuste; break;
        case 3:
            reajuste = salario * 0.12; 
            salario = salario + reajuste; break;
        case 4:
            reajuste = salario * 0.11; 
            salario = salario + reajuste; break;    
        }

     printf("\nSeu salario atual e: %.2f", salario);



return 0;

}