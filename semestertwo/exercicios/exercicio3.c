// Declare um inteiro n com o valor 1025.
// Declare um ponteiro para char e atribua o endereço de n a este ponteiro.
// Imprima os valor dos dois primeiros bytes do inteiro n.
// Modifique o valor do terceiro byte de n utilizando ponteiro para char e atribua o valor 1.
// Imprima o valor de n e explique o resultado final de n.

#include <stdio.h>
int main(void) {

  int n = 1025;
  char *p;
  p = (char *)&n;
  printf("Valor do primeiro byte de n: %d\n", *p);
  printf("Valor do segundo byte de n: %d\n", *(p + 1));
  *(p + 2) = 1;
  printf("Valor de n: %d\n", n);
  
  return 0;
}
