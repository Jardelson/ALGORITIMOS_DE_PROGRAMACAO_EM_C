#include <stdio.h>
int main() { // 0 1 2 3 4 5 6 7 8 9

  int numero[10]; // 1          5
  numero[0] = 1;
  numero[8] = 5;

  int soma = 0;
  for (int i = 0; i < 10; i++) {
    printf("Entre com o %i° numero:\n", i + 1);
    int deu_certo = scanf("%i", &numero[i]);
    soma = soma + numero[i];
  }

  float media = soma / 10.0f;
  printf("A media de ");
  for(int i=0; i<10; i++) {
    printf("%i +", numero[i]);
  }
  printf("/10 = %.1f\n", media);
  return 0; 
}