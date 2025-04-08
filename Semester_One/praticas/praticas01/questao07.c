// Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main() {
  float distancia = 0.0;
  float angulo = 0.0;
  float altura = 0.0;

  printf("insira a distancia percorrida pelo aviao: ");
  scanf("%f", &distancia);
  printf("insira o angulo de inclinacao do aviao: ");
  scanf("%f", &angulo);

  // Converter o ângulo de graus para radianos
  float angulo_radianos = angulo * M_PI / 180.0;

  altura = distancia * sin(angulo_radianos);

  printf("a altura alcancada pelo aviao foi de %f\n", altura);

  return 0;
}
