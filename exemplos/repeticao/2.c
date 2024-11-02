 #include <stdio.h>

 int main(){

    int x, y, cont;

    scanf("%i%i", &x, &y);

    cont = x + 1;

    while (cont < y){
        printf("\n%i", cont);
        cont++;
    }

return 0;

 }