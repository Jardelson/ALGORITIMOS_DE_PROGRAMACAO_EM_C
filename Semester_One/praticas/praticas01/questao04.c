/* 
Faça um programa em C que calcule os impostos incluidos no preço deum produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%. 
*/


#include <stdio.h>
int main() {

  float preco_inicial = 0.0f;
  float preco_final = 0.0f;
  
  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  printf("Insira valor do produto:");
  scanf("%f", &preco_inicial);

  float valor_impostos_icms = ICMS * preco_inicial;
  float valor_impostos_cofins = COFINS * preco_inicial;
  float valor_impostos_pis_pasep = PIS_PASEP * preco_inicial;
  
  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  
printf("Preço inicial = %f\n", preco_inicial);
printf("Preço final = %f\n", preco_final);
printf("Valor ICMS = %f\n", valor_impostos_icms);
printf("Valor CONFINS = %f\n", valor_impostos_cofins);
printf("valor PIS_PASEP = %f\n", valor_impostos_pis_pasep);


  
  return 0;
}
