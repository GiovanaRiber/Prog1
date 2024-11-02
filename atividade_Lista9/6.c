#include <stdio.h>
#include <string.h>
#define MAX 3

struct analise{

    char nome[50];
    int idade;
    int altura;
    int peso;

};

void imprime(struct analise *aluno){

    int i = 0;
    int menor = 1000000000;
    int maior = 0;
    char menorIdade[50];
    char maiorPeso[50];

    for(i = 0; i < MAX; i++){

        if(menor > aluno[i].idade){

            menor = aluno[i].idade;
            strcpy(menorIdade, aluno[i].nome);

        }

        if(maior < aluno[i].peso){

            maior = aluno[i].peso;
            strcpy(maiorPeso, aluno[i].nome);

        }
    }

    printf("\n---------------------------------------");
    printf("\nAluno(a) mais novo(a): %s", menorIdade);
    printf("\nMaior peso: %s", maiorPeso);
    printf("---------------------------------------");

}

int main(){

    struct analise aluno[MAX];

    for(int i = 0; i < MAX; i++){

        printf("\n==================================");
        printf("\nInsira o nome do aluno %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(aluno[i].nome, 50, stdin);

        printf("Insira a idade: ");
        scanf("%d", &aluno[i].idade);

        printf("Insira a altura[cm] e o peso: ");
        scanf("%d%d", &aluno[i].altura, &aluno[i].peso);
        printf("==================================");
        printf("\n");

    }

    imprime(aluno);

    return 0;
}