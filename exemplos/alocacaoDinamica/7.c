#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{

    int matricula;
    char nome[50];
    float nota;

};

int main(){

    struct aluno *alunos;
    int n;

    //lê a quantidade de alunos  
    scanf("%d", &n);

    alunos = (struct aluno *) malloc (n * sizeof(struct aluno));

    //aloca de acordo com a quantidade de alunos que deseja cadastrar
    for(int i = 0; i < n; i++){

        getchar();//descarte do \n
        alunos[i].matricula = i+1;
        fgets(alunos[i].nome, 50, stdin);
        scanf("%f", &alunos[i].nota);

    }

    for(int i = 0; i < n; i++){

        printf("\nAluno %d: %s", i+1, alunos[i].nome);
        printf("Matricula: %d", alunos[i].matricula);
        printf("\nNota: %.2f\n", alunos[i].nota);

    }

    return 0;
}