#include <stdio.h>

int main(){

   float Media, Nota1, Nota2, Nota3, Nota4;

      printf("Exercicio 2\n\n");
      printf("\nDigite suas 4 notas bimestrais: ");
      scanf("%f%f%f%f", &Nota1, &Nota2, &Nota3, &Nota4);
         
      Media= (Nota1 + Nota2 + Nota3 + Nota4)/4;
      printf("\n\nSua media e: %.2f", Media);
      return 0;

}