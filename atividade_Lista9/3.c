#include <stdio.h>

struct usuario{

    int idade;
    char nome[50];
    char sexo;
    char estado;
    int amigos;
    int fotos;
};

int main(){

    int num;

    printf("\nInforme a quantidade de usuarios: ");
    scanf("%d", &num);

    struct usuario c[num];

    for(int i = 0; i < num; i++){
        printf("\nInsira a idade do usuario %d: ", i+1);
        scanf("%d", &c[i].idade);

        printf("\nInsira o nome: ");
        setbuf(stdin, NULL);
        fgets(c[i].nome, 50, stdin);

        printf("\nInsira o sexo [m/f] e o estado civil [s, c, n, d]: ");
        scanf(" %c %c", &c[i].sexo, &c[i].estado);

        printf("\nInsira a quantidade de amigos e fotos respectivamente: ");
        scanf("%d%d", &c[i].amigos, &c[i].fotos);
    }

    for(int i = 0; i < num; i++){
        printf("\nIdade do usuario %d:.... %d", i+1, c[i].idade);
        printf("\nNome:.................. %s", c[i].nome);
        if(c[i].sexo == 'm'){
            printf("Sexo:.................. Masculino");
        }
        else{
            printf("Sexo:.................. Feminino");
        }

        switch (c[i].estado){

            case 's':
                printf("\nEstado Civil:.......... Solteiro"); break;
            case 'c':
                printf("\nEstado Civil:.......... Casado"); break;
            case 'n':
                printf("\nEstado Civil:.......... Namorando"); break;
            case 'd':
                printf("\nEstado Civil:.......... Divorciado"); break;
        }

        printf("\nQuantida de amigos:.... %d", c[i].amigos);
        printf("\nQuantidade de fotos:... %d", c[i].fotos);
        printf("\n");
    }

    return 0;
}