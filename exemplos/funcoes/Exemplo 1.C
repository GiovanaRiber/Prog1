#include <stdio.h>

float maior2(int a, int b){
    
    if ( a > b)
        return a;
    else
        return b;
}

int main(){

    int x , y , resultado ;

    scanf ("%d%d", &x , & y ) ;
    resultado = maior2 (x , y );
    printf ("\nMaior numero : %d\n", resultado ) ;

return 0;
}