#include <stdio.h>
#include <string.h>

struct cadastro {

    int matricula;
    char nome[50];
    float nota;

};

void resultado(int x){

    struct cadastro c[x];

    int aprovados = 0, reprovados = 0, exame = 0;
    int cont = 0;
    int maior = 0;
    float media;
    char M_nota[50];

    for(int i = 0; i < x; i++){

        printf("\n------------------------------------------");
        printf("\nInsira o codigo da matricula: ");
        scanf("%d", &c[i].matricula);

        printf("Insira o nome do aluno: ");
        setbuf(stdin, NULL);
        fgets(c[i].nome, 50, stdin);

        printf("Insira a nota final: ");
        scanf("%f", &c[i].nota);
        printf("------------------------------------------\n");

        cont += c[i].nota;

        if(maior < c[i].nota)
        {
            maior = c[i].nota;
            strcpy(M_nota, c[i].nome);
        }

        if(c[i].nota >= 7.0)
        {
            aprovados++;
        }
        else if(c[i].nota >= 4.0 && c[i].nota < 7.0)
        {
            exame++;
        }
        else
        {
            reprovados++;
        }

    }

    media = cont/x;

    printf("\n\nA media da turma e %.2f !\n", media);

    if(aprovados == 0)
    {
        printf("\n==========================================");
        printf("\nNAO HA ALUNOS APROVADOS !");
        printf("\n==========================================");
    }
    else
    {
        printf("\nALUNOS APROVADOS !");

        for(int i = 0;  i < x; i++){

            if(c[i].nota >= 7.0){

                printf("\n==========================================");
                printf("\nMatricula: %d", c[i].matricula);
                printf("\nNome: %s", c[i].nome);
                printf("Nota: %.1f", c[i].nota);
                printf("\n==========================================");
                printf("\n");
            }
        }
    }

    if(exame == 0)
    {
        printf("\n==========================================");
        printf("\nNAO HA ALUNOS DE EXAME !");
        printf("\n==========================================");
    }
    else
    {
        printf("\nALUNOS DE EXAME !");

        for(int i = 0;  i < x; i++)
        {
            if(c[i].nota >= 4.0 && c[i].nota < 7.0)
            {
                printf("\n==========================================");
                printf("\nMatricula: %d", c[i].matricula);
                printf("\nNome: %s", c[i].nome);
                printf("Nota: %.1f", c[i].nota);
                printf("\n==========================================");
                printf("\n");
            }
        }
    }

    if(reprovados == 0)
    {
        printf("\n==========================================");
        printf("\nNAO HA ALUNOS REPROVADOS!");
        printf("\n==========================================");
    }
    else
    {
        printf("\nALUNOS DE REPROVADOS !");

        for(int i = 0;  i < x; i++)
        {
            if(c[i].nota < 4.0)
            {
                printf("\n==========================================");
                printf("\nMatricula: %d", c[i].matricula);
                printf("\nNome: %s", c[i].nome);
                printf("Nota: %.1f", c[i].nota);
                printf("\n==========================================");
                printf("\n");
            }
        }
    }

    printf("\nAluno de maior nota: %s", M_nota);

}

int main(){

    int alunos;

    printf("Quantos alunos serao avaliados?: ");
    scanf("%d", &alunos);

    if(alunos > 50)
    {
        printf("\nQuantidade de alunoss excedeu a capacidade maxima do programa!");
    }
    else
    {
        resultado(alunos);
    }

    return 0;
}