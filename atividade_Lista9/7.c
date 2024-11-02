#include <stdio.h>

struct cadastro{

    int codigo;
    char descricao[100];
    float preco;

};

struct pedido{

    int codigo;
    int quantidade;

};


int main(){

    int n;

    printf("Insira a quantidade de produtos a serem cadastrados: ");
    scanf("%d", &n);

    struct cadastro c[n];

    for(int i = 0; i < n; i++){
    
        printf("\n================================================");
        printf("\nInsira o codigo do produto %d: ", i+1);
        scanf("%d", &c[i].codigo);
        printf("Insira a descricao do produto: ");
        setbuf(stdin, NULL);
        fgets(c[i].descricao, 100, stdin);
        printf("Insira o preco: ");
        scanf("%f", &c[i].preco);
        printf("================================================\n");

    }

    struct pedido p[n];

    printf("\nPEDIDO\n");

    for(int i = 0; i < n; i++){

        printf("\n------------------------------------------------");
        printf("\nInsira o codigo do produto desejado: ");
        scanf("%d", &p[i].codigo);
        if(p[i].codigo == 0){
            break;
        }
        printf("Insira a quantidade: ");
        scanf("%d", &p[i].quantidade);
        printf("------------------------------------------------\n");
        
    }


    for(int i = 0; i < n; i++){

        int cont = 0;

        for(int j = 0; j < n; j++){

            if(c[i].codigo == p[j].codigo){

                cont = 1;

                if(p[j].quantidade < 0){

                    printf("\n================================================");
                    printf("\nReferente ao codigo %d, o pedido e invalido !", p[j].codigo);
                    printf("\n================================================\n");

                }
                else{

                    printf("\n================================================");
                    printf("\nReferente ao codigo %d, o valor a ser pago e: %.2f", p[j].codigo, (c[i].preco * p[j].quantidade));
                    printf("\n================================================\n");

                }

                break;

            }
        }

        if(cont == 0){
                    
            printf("\n================================================");
            printf("\nReferente ao codigo %d, o pedido nao esta cadastrado !", p[i].codigo);
            printf("\n================================================\n");

        }
    }


    return 0;
}