#include <stdio.h>

struct personagem{

    char nome[20];
    int ID;
    int level;
    int vida;
    int ataque;
    int defesa;

};

int main(){

    int num;

    printf("Insira a quantidade de personagens: ");
    scanf("%d", &num);

    struct personagem m[num];

    for(int i = 0; i < num; i++){

        printf("\nInforme o nome do personagem %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(m[i].nome, 20, stdin);

        printf("\nInsira O ID: ");
        scanf("%d", &m[i].ID);

        printf("\ninsira o level e a vida: ");
        scanf("%d%d", &m[i].level, &m[i].vida);

        printf("\nInsira o Ataque e a Defesa: ");
        scanf("%d%d", &m[i].ataque, &m[i].defesa);

    }

    for(int i = 0; i < num; i++){

        printf("\n====================================");
        printf("\nNome do personagem %d:..... %s", i+1, m[i].nome);
        printf("ID:....................... %d", m[i].ID);
        printf("\nLevel:.................... %d", m[i].level);
        printf("\nAtaque:................... %d", m[i].ataque);
        printf("\nDefesa:................... %d", m[i].defesa);
        printf("\n====================================");
        printf("\n");

    }

    return 0;
}