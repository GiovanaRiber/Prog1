#include <stdio.h>

int maior2(int a, int b, int c){
int m;
m = a;

if(m < b){
    m = b;
}
if(c > m){
    m = c;
}
return m;}

int main(){

    int x, y, z;

    printf("Digite tres numeros interos: ");
    scanf("%d%d%d", & x, &y, &z);
    printf("\nMaior:%d", maior2(x, y, z));

return 0;
}