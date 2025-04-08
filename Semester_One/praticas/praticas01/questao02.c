/*
2. Faça um programa em C que calcule a area de um triangulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {
  int base = 0;
  int altura = 0;
  printf ("Informe a base do triangulo: ");
  scanf("%i", &base);

  printf ("Informe a altura do triangulo: ");
  scanf("%i", &altura);
  
  int area = base * altura / 2;

  printf("A area do triangulo é %i\n", area);
  
  return 0;
}