#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

  struct item_nota_fiscal_t {
    char nome[21];
    int quantidade;
    int unidade;
    float preco;
    float valor;
  };

  struct item_nota_fiscal_t item[5];
  float total = 0.0f;

  for(int i=0; i<5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%[^\n]s", item[i].nome);
    while(getchar() != '\n');
    int tamanho = strlen(item[i].nome);
    for(int j=0; j<tamanho; j++) {
      item[i].nome[j] = toupper(item[i].nome[j]);
    }

    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf("%i", &item[i].quantidade);
    while(getchar() != '\n');

    printf("Entre com o preco do produto: ");
    deu_certo = scanf("%f", &item[i].preco);
    while(getchar() != '\n');

    item[i].valor = item[i].quantidade * item[i].preco;
    total = total + item[i].valor;
  }

  printf("\nN O T A  L E G A L\n");
  printf("Item          Qtd  Preco  Valor\n");
  for(int i=0; i<5; i++) {
    printf("%-14.13s%03i%7.2f%7.2f\n", item[i].nome, item[i].quantidade,
      item[i].preco, item[i].valor);
  }
  printf("-------------------------------\n");
  printf("Total..................:%7.2f\n", total);
  return 0;
}