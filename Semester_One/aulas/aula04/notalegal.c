#include <stdio.h>

int main() {

  char nome[31];
  int quantidade;
  float valor;
  
  printf("Digite um produto:\n");
  int deu_certo = scanf("%[^\n]s", nome);


  printf("Entre com qtde de produtos:\n");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com o valor de produtos:\n");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[37m-------------------------\n");
  printf("   N O T A   L E G A L   \n");
  printf("-------------------------\x1b[0m\n");
  printf("\x1b[36mItem          Qtd Valor     \x1b[0m\n");
  printf("\x1b[36m%-13s %03i %4.2f\n\x1b[0m", nome , quantidade, valor);
  
  
  return 0;
}