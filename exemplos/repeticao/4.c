#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media;
    int aluno = 1;

    do{
        printf("Digite as quatro notas do aluno: ");
        scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
        media = (n1 + n2 + n3 + n4)/4;
        printf("Media do aluno: %i %2.f\n", aluno, media);
        aluno++;
    } while (aluno <= 3);

return 0;
}