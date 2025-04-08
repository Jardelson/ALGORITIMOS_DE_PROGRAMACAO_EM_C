#include <stdio.h>

int main() {
  enum unidade_e {
    unidade,
    caixa,
    lata,
    peso,
  };

  struct produto_t {
    char nome[21];
    float preco;
    int quantidade;
    float valor;
    int unidade; // 0 = un, 1 = cx, 2 = lt, 3 = ps
  };

  struct produto_t produto[5];

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%s", produto[i].nome);

    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf("%i", &produto[i].quantidade);

    printf("Entre com a unidade do produto\n");
    printf("0 - unidade, 1 = caixa, 2 = lata, 3 = peso: ");
    deu_certo = scanf("%i", &produto[i].unidade);

    printf("Entre com o preco do produto: ");
    deu_certo = scanf("%f", &produto[i].preco);

    produto[i].valor = produto[i].preco * produto[i].quantidade;
  }
  printf("\n     N O T A  L E G A L\n");
  printf("Item         Qtd  Und   Preco   Valor\n");
  for (int i = 0; i < 5; i++) {
    printf("%-12s %03i ", produto[i].nome, produto[i].quantidade);

    switch (produto[i].unidade) {
    case unidade:
      printf(" UN ");
      break;
    case caixa:
      printf(" CX ");
      break;
    case lata:
      printf(" LT ");
      break;
    case peso:
      printf(" KG ");
      break;

      printf("%8.2f%8.2f\n", produto[i].preco, produto[i].valor);
    }
  }
  return 0;
}