/* Faça um programa em C que determine se um número inteiro lido é par ou ímpar */

#include <stdio.h>
int main () {
  int numero;
 
  printf("insira um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
  
    int numero_eh_divisivel_por_2 = numero % 2 == 0;
  
  if (numero_eh_divisivel_por_2) {
    printf("Ele é par\n");
  } else {
    printf("Ele é impar\n");
  }
  } else {
    printf("Não foi possível ler o número\n");
  }

  return 0;
}