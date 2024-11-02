#include <stdio.h>

struct lojas{

    char nome[20];
    char endereco[50];
    signed int telefone;
    float preco;

};

int main(){

    int num;
    char produto[20];
    int cont = 0, cont2 = 0;
    float media;

    printf("Insira a quantidade de lojas: ");
    scanf("%d", &num);

    if(num > 100){

        printf("\nImpossivel prosseguir !");

    }
    else{

        printf("\nInsira o nome do produto desejado: ");
        setbuf(stdin, NULL);
        fgets(produto, 20, stdin);

        struct lojas p[num];

        for(int i = 0; i < num; i++){

            printf("================================\n");
            printf("Insira o nome da loja %d: ", i+1);
            setbuf(stdin, NULL);
            fgets(p[i].nome, 20, stdin);

            printf("Insira o telefone: ");
            scanf("%d", &p[i].telefone);

            printf("Insira o endereco: ");
            setbuf(stdin, NULL);
            fgets(p[i].endereco, 50, stdin);

            printf("Insira o preco do produto: ");
            scanf("%f", &p[i].preco);
            printf("================================\n");
            printf("\n");

            cont += p[i].preco;

        }

        media = cont/num;

        for(int i = 0; i < num; i++){

            if(p[i].preco < media){

                cont2++;

            }

        }

        printf("\nA media do preco do produto desejado e %.2f !\n", media);

        if(cont2 == 0){

            printf("\nNao ha lojas com o preco abaixo da media !\n");

        }
        else{

            printf("\nLOJAS COM PRECO ABAIXO DA MEDIA: \n");

            for(int i = 0; i < cont2; i++){

            printf("\n=====================================");
            printf("\nNome da loja %d:.... %s", i+1, p[i].nome);

            printf("Telefone:.......... %d", p[i].telefone);

            printf("\nEndereco:.......... %s", p[i].endereco);

            printf("Preco:............. %.2f", p[i].preco);
            printf("\n=====================================");
            printf("\n");

            }

        }

    }

    return 0;
}