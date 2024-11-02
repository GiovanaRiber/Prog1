#include <stdio.h>
#define MAX 44

struct Data{

    char dataOrigem[10];
    char dataDestino[10];

};

struct lista{

    int numero;
    struct Data data;
    int horario;
    int poltrona;
    int idade;
    char nome[100];

};

int main(){

    struct lista p[MAX];

    int cont = 0;
    float media; 
    int mais = 0;
    int quantidade = 0;

    for(int i = 0; i < MAX; i++){

        printf("\n-----------------------------------------------------------");
        printf("\nInsira o numero da passagem: ");
        scanf("%d",  &p[i].numero);

        if(p[i].numero == -1 ){

            printf("-----------------------------------------------------------");
            break;

        }

        printf("\nInsira a data de origem [DD/MM/AA]: ");
        setbuf(stdin, NULL);
        fgets(p[i].data.dataOrigem, 10, stdin);

        printf("Insira a data de destino [DD/MM/AA]: ");
        setbuf(stdin, NULL);
        fgets(p[i].data.dataDestino, 10, stdin);

        printf("Insira o horario de saida: ");
        scanf("%d", &p[i].horario);

        printf("Insira a poltrona: ");
        scanf("%d", &p[i].poltrona);

        printf("Insira a idade: ");
        scanf("%d", &p[i].idade);

        cont += p[i].idade;

        printf("Insira o nome: ");
        setbuf(stdin, NULL);
        fgets(p[i].nome, 100, stdin);
        printf("-----------------------------------------------------------");
        printf("\n");

        quantidade++;
        
    }

    media = cont/quantidade;

    for(int i = 0; i < quantidade; i++){

        if(p[i].poltrona % 2 == 0 && p[i].idade < media){

            mais++;

        }
    }

    if(mais == 0){

    printf("\n===========================================================");
    printf("\nNao ha passageiros em poltronas pares com mais de %.2f anos !", media);
    printf("\n===========================================================");

    }
    else{

        printf("\n===========================================================");
        printf("\nPassageiros em poltronas pares com mais de %.2f anos !", media);
        printf("\n===========================================================\n");
        

        for(int i = 0; i < quantidade; i++){

            if(p[i].poltrona % 2 == 0 && p[i].idade < media){

                printf("%s", p[i].nome);

            }
        }
    }

    return 0;
}