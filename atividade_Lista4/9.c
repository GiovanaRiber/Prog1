#include <stdio.h>

int totalSegundos(int h, int m, int s){
    h = h*3600;
    m = m*60;
    return s = s + m + h;
}

int main(){

    int hora, minuto, segundo;

    printf("Defina a hora[HH/MM/SS]: ");
    scanf("%d%d%d", &hora, &minuto, &segundo);

    printf("\nO total de segundos: %d", totalSegundos(hora, minuto, segundo));

return 0;
}