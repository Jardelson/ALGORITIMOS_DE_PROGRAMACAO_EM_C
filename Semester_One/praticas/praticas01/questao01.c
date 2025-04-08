/*
1. Faça um programa em C que calcule a média final a partir da fórmla (0,4 x A1) + (0,6 X A2). Considere A1 e A2 números reais entre 0 a 10.
  */

#include <stdio.h>
int main(){
  float nota1 = 5.5f; // o "f" serve para informar que é um float
  float nota2 = 4.0f;
  float media = 0.4 * nota1 + 0.6 * nota2;
  printf("A media final é %f\n", media);

  
return 0;
}

