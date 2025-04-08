//Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
#include <stdio.h>
int main() {
  float peso;
  float altura;

  printf("insira o peso: ");
  float ok = scanf("%f", &peso);
  
  printf("insira a altura: ");
  ok = scanf("%f", &altura);
  
  float imc = peso / (altura * altura);
  printf("o imc é: %f\n", imc);


  return 0;
}
        
