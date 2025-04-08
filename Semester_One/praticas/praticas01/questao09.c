// Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>
#include <math.h>


int main() {
  int anos = 0;
  int meses = 0;
  int dias = 0;
  float distancia = 0.0;
  float angulo = 0.0;

int total_dias = 0;

  printf("Insira a quantidade de anos: ");
  scanf("%i", &anos);
  printf("Insira a quantidade de meses: ");
  scanf("%i", &meses);
  printf("Insira a quantidade de dias: "); // Estava errado por faltar a atribuição de valor a variável dias.
  scanf("%i", &dias);
  printf("Insira a distancia percorrida pelo aviao: ");
  scanf("%f", &distancia);
  printf("Insira o angulo de inclinacao do aviao: ");
  scanf("%f", &angulo);


  total_dias = anos * 365 + meses * 30 + dias;
  printf("A quantidade de dias é %i\n", total_dias);


return 0;  
}