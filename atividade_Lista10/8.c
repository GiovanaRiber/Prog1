#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{

    char nome[20];
    char sobrenome[50];
    float nota;

};

void maiorNota(struct aluno *x, int n){

    char maiorN[20];
    char maiorS[50];
    float  m = 0;
    int i;

    for(i = 0; i < n; i++){

        if(x[i].nota > m){

            strcpy(maiorN,x[i].nome);
            strcpy(maiorS, x[i].sobrenome);
            m = x[i].nota;
        }
    }

        printf("\nO aluno com a maior nota e: %s %s", maiorN, maiorS);

}

int main(){

    int n, i;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);
   
    struct aluno *x = (struct aluno *) malloc(n * sizeof(struct aluno));

    if(x == NULL){
        printf("\nErro: mamoria insificiente\n");
        exit(1);
    }

    for(i = 0; i < n; i++){
        printf("\nInsira o nome do aluno %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(x[i].nome, 20, stdin);

        printf("Insira o sobrenome do aluno: ");
        setbuf(stdin, NULL);
        fgets(x[i].sobrenome, 50, stdin);

        printf("Insira a nota final: ");
        scanf("%f", &x[i].nota);
    }

    maiorNota(x, n);


    return 0;
}