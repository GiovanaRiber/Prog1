#include <stdio.h>

int main(){

   float Horas, Minutos, Segundos;

      printf("Exercicio 4\n");
      printf("\nDefina a Hora (HH MM SS): ");
      scanf("%f%f%f", &Horas, &Minutos, &Segundos);
      
      Horas= Horas*3600;
      Minutos= Minutos*60;
      Segundos= Segundos + Minutos + Horas;
      printf("\nO total de segundos e: %.2f", Segundos);
      return 0;

}