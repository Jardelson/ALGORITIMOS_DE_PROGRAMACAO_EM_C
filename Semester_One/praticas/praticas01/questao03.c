/* 3. Faça um programa em C que calcule o perimetro de uma pizza, a partir da fórmula P = 2 x pi x raio. */
#include <stdio.h>
int main() {
  float pi = 3.14;
  float raio = 0.0;

  printf ( "Digite o raio da pizza: " );
  scanf( "%f" , &raio );

  float perimetro_da_pizza = 2*pi*raio;
  printf("o perimetro da pizza é: %f\n", perimetro_da_pizza);
  return 0;
}// shell ./perimetro_da_pizza
