#include <stdio.h>

int main() {
  int anos = 0;
  int meses = 0;
  int dias = 0;
  int total_dias = 0;

  printf("Insira a quantidade de anos: ");
  scanf("%d", &anos);
  printf("Insira a quantidade de meses: ");
  scanf("%d", &meses);
  printf("Insira a quantidade de dias: ");
  scanf("%d", &dias);

  if (dias < 0 || dias > 30 || meses < 0 || meses > 12 || anos < 0) {
      printf("Entrada inválida para a idade.\n");
      return 1;
  }

  total_dias = calculo(anos, meses, dias);
  printf("A quantidade de dias é %d\n", total_dias);

  return 0;