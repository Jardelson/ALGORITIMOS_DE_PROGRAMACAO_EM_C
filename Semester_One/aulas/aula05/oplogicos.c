#include <stdio.h>

int main() {
  int numero;

  printf("Digite o primeiro numero: ");
  int ok = scanf("%i", &numero);

  /* 0 < x < 10 -> 0 < x e x < 10 */
  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("O primeiro numero eh maior que 0 e menor que 10? %i\n", maior_que_0_e_menor_que_10);

  /* 0 <= x <= 10 -> 0 <= x e x <= 10 */
  int maior_ou_igual_a_0_e_menor_ou_igual_a_10 = numero >= 0 && numero <= 10;
  
  printf("O primeiro numero eh maior ou igual a 0 e menor ou igual a 10? %i\n", maior_ou_igual_a_0_e_menor_ou_igual_a_10);

    // x NÃO > 0
  int nao_maior_que_0 = !(numero > 0); // numero < 0
  printf("O primeiro numero nao eh maior que 0? %i\n", nao_maior_que_0);

  return 0;
}
