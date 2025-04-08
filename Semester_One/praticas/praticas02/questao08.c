/*8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²))*/
#include <stdio.h>
#include <math.h>
int main (){

  float x1;
  float y1;
  float x2;
  float y2;

  printf("insira a coordenada x1:\n ");
  float ok = scanf("%f" , &x1);

  printf("insira a cordenada y1:\n ");
  ok = scanf("%f" , &y1);

  printf("insira a coordenada x2:\n ");
  ok = scanf("%f" , &x2);

  printf("insira a coordenada y2:\n ");
  ok = scanf("%f" , &y2);

  float distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
  printf("a distancia entre os pontos é: %f\n", distancia);  
  return 0;
}