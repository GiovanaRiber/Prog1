#include <stdio.h>
#include <math.h>

int main(){

   int Ax, Bx, Ay, By, Distancia;

      printf("Exercicio 5\n");
      printf("\nDigite as coordenadas do ponto A: ");
      scanf("%d%d", &Ax, &Bx);
      printf("\nDigite as coordenadas do ponto B:");
      scanf("%d%d", &Ay, &By);

      Distancia= sqrt(pow(Ay-Ax,2) + pow(By-Bx,2));
      printf("\nA distancia entre os dois pontos e: %.d", Distancia);
      return 0;

}
