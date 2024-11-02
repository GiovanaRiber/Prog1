#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct cadastro{

    char nome[100];
    char genero;
    char modo;
    char plataforma[50];
    int posicao;

};

void leitura(struct cadastro *c, int x){

    printf("\n          CADASTRO DE JOGO          ");
    printf("\n============= GENEROS ==============");
    printf("\n|RPG:........... R                 |");
    printf("\n|ACAO:.......... A                 |");
    printf("\n|SIMULACAO:..... S                 |");
    printf("\n====================================\n");
    printf("\n========== MODO DE JOOGO ===========");
    printf("\n|SINGLE PLAYER:. S                 |");
    printf("\n|MULTPLAYER:.... M                 |");
    printf("\n====================================\n");

    for(int i = 0; i < x; i++){

        printf("\n=======================================");
        
        printf("\nInsira o nome do jogo %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(c[i].nome, 100, stdin);

        printf("Insira o genero [R/A/S]: ");
        scanf(" %c", &c[i].genero);
        c[i].genero = tolower(c[i].genero);

        printf("Insira o modo de jogo [S/M]: ");
        scanf(" %c", &c[i].modo);
        c[i].modo = tolower(c[i].modo);

        printf("Insira a plataforma: ");
        setbuf(stdin, NULL);
        fgets(c[i].plataforma, 50, stdin);    

        printf("Posicao no ranking: ");
        scanf("%d", &c[i].posicao);
        printf("=======================================\n");
    }
}

void exibir(struct cadastro *c, int x){

    for(int i = 0; i < x; i++){

    printf("\n=======================================");
    printf("\nNome: %s", c[i].nome);
    printf("Genero: %c", c[i].genero);
    printf("\nModo: %c", c[i].modo);
    printf("\nPlatadorma: %s", c[i].plataforma);
    printf("Ranking: %d", c[i].posicao);
    printf("\n=======================================\n");
    }
}

void genero(struct cadastro *c, int x){

    int cont = 0;
    char w;

    printf("\nInsira o genero do jogo[R/A/S]: ");
    scanf(" %c", &w);

    for(int i = 0; i < x; i++){

        if(c[i].genero == w){

        cont = 1;
        
        printf("\n=======================================");
        printf("\nNome: %s", c[i].nome);
        printf("Genero: %c", c[i].genero);
        printf("\nModo: %c", c[i].modo);
        printf("\nPlatadorma: %s", c[i].plataforma);
        printf("Ranking: %d", c[i].posicao);
        printf("\n=======================================\n");

        }
    }

    if(cont != 1){

        printf("\nNao ha jogos com esse genero !\n");
        return;
    }
}

void ranking(struct cadastro *c, int x){

    int p, cont = 0;

    printf("\nInsira a posicao no ranking: ");
    scanf("%d", &p);

    for(int i = 0; i < x; i++){

        if(c[i].posicao == p){

            cont = 1;

            printf("\n=======================================");
            printf("\nNome: %s", c[i].nome);
            printf("Genero: %c", c[i].genero);
            printf("\nModo: %c", c[i].modo);
            printf("\nPlatadorma: %s", c[i].plataforma);
            printf("Ranking: %d", c[i].posicao);
            printf("\n=======================================\n");

        }

        if(cont != 1){
        
        printf("\nNao ha jogos com essa posicao no ranking !\n");
        return;
        }
    }
}

void nome(struct cadastro *c, int x){

    char name[100];
    int i;

    printf("\nInsira o nome do jogo: ");
    setbuf(stdin, NULL);
    fgets(name, 100, stdin);

    for(i = 0; i < x; i++){

        if(strcmp(name, c[i].nome) == 0 && c[i].posicao == 5){

            printf("\nE uma otima escolha de jogo!");
            return;

        }
        else{
            if(strcmp(name, c[i].nome) == 1 || strcmp(name, c[i].nome) == -1){

                printf("\nEsse jogo nao esta cadastrado !");
                return;
            }
        }
    }
    printf("\nHa opicoes melhores !");
    
}

int main(){

    int n;

    printf("Quantos jogos serao cadastrados?: ");
    scanf("%d", &n);

    struct cadastro c[n];

    leitura(c, n);
    exibir(c, n);
    genero(c, n);
    ranking(c, n);
    nome(c, n);

}