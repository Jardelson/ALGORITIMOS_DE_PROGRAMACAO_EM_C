#include <stdio.h>

int main() {
  int numero1, numero2;

  printf("Digite o primeiro numero: ");
  int ok = scanf("%i", &numero1);

  printf("Digite o segundo numero: ");
  ok = scanf("%i", &numero2);

  int saoIguais = numero1 == numero2; /* == é o operador de igualdade */
  printf("Os números são iguais? %i\n", saoIguais);

  int saoDiferentes = numero1 != numero2; /* != é o operador de diferença */
  printf("Os números são diferentes? %i\n", saoDiferentes);

  int umemaior = numero1 > numero2; /* > é o operador de maior */
  printf("O primeiro número é maior que o segundo? %i\n", umemaior);

  int ummenor = numero1 < numero2; /* < é o operador de menor */
  printf("O primeiro número é menor que o segundo? %i\n", ummenor);

  int ummaiorigual = numero1 >= numero2; /* >= é o operador de maior ou igual */
  printf("O primeiro número é maior que, ou igual ao segundo? %i\n", ummaiorigual);

  int ummenorigual = numero1 <= numero2; /* <= é o operador de menor ou igual */
  printf("O primeiro número é menor que, ou igual ao segundo? %i\n", ummenorigual);

  return 0;
}
