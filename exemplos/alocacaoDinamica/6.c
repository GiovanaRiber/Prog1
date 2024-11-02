#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{

    int matricula;
    char nome[50];

};

int main(){

    struct aluno *alunos;

    alunos = (struct aluno *) malloc (sizeof(struct aluno));
    alunos -> matricula = 101010101;
    strcpy(alunos -> nome, "Fulano");

    printf("Matricula = %d\nNome = %s\n", alunos -> matricula, alunos -> nome);
    free(alunos);

    return 0;
}