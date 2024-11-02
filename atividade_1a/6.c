#include <stdio.h>

int main(){

   int Valor1, Valor2, AUX;

      printf("Exercicio 6\n");
      printf("\nIndique o valor 1: ");
      scanf("%d", &Valor1);
      printf("\nIndique o valor 2: ");
      scanf("%d", &Valor2);

      AUX= Valor1;
      Valor1= Valor2;
      Valor2= AUX;
      printf("X=%d\tY=%d\n", Valor1, Valor2);
      printf("X=%d\tY=%d\n", Valor2, Valor1);     
      return 0;

}