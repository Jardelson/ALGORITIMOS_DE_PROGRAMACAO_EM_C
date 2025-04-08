/* 6. Faça um programa em C que calcule as raízes de uma equação do 2º grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). */
#include <stdio.h>
#include <math.h>

int main() {
  float a = 0.0;
  float b = 0.0;
  float c = 0.0;

  printf("insira o valor de A: ");
  scanf("%f", &a);
  printf("insira o valor de B: "); 
  scanf("%f", &b);
  printf("insira o valor de C: ");
  scanf("%f", &c);
  double x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
  double x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
  printf("x1 = %f\n", x1);
  printf("x2 = %f\n", x2);
  return 0;
}