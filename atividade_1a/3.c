#include <stdio.h>

int main(){

   float Valor_produto, Valor_dolar, Valor_euro, Produto_dolar, Produto_euro;

      printf("Exercicio 3\n");
      printf("\nQual o preco do produto?: ");
      scanf("%f", &Valor_produto);
      printf("\nQual a cotacao do Dolar?: ");
      scanf("%f", &Valor_dolar);
      printf("\nQual a cotacao do Euro?: ");
      scanf("%f", &Valor_euro);

      Produto_dolar= (Valor_produto * Valor_dolar);
      Produto_euro= (Valor_produto * Valor_euro);
      printf("\nO valor do produto em Dolar e: %.2f", Produto_dolar);
      printf("\n\nO valor do protuto em Euro e: %.2f", Produto_euro);
      return 0;

}