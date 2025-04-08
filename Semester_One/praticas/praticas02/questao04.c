 //Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
#include <stdio.h>
   int main () {
     float largura;
     float comprimento;
     float area;
     float hectares;
     
     printf("insira a largura do terreno em metros: ");
     float ok = scanf("%f", &largura);
     
     printf("insira o comprimento do terreno em metros: ");
     
     ok = scanf("%f", &comprimento);
     
     area = largura * comprimento;
     hectares = area / 10000;
     
     printf("a area do terreno em hectares é: %f\n", hectares);
    


   return 0;
   }