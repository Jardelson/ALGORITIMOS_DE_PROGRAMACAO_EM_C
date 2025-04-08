/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%
*/

#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;

  printf("--------------------------------\n");
  printf("    C O N T R A C H E Q U E     \n");
  printf("--------------------------------\n");
  printf("\x1b[34mSalario Bruto...: %14.2f\n\x1b[34m", valor_salario_bruto);
  printf("\x1b[31mImposto Renda...: %14.2f\n\x1b[31m", valor_imposto_renda);
  printf("\x1b[0mImposto Previ...: %14.2f\n", valor_imposto_previdencia);
  printf("\x1b[34mSalario Liquido.: %14.2f\n\x1b[34m", valor_salario_liquido);

  return 0;
}
