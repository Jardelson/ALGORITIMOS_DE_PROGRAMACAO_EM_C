/* 5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes). */
#include <stdio.h>

int main() {
  float GB = 0.0;

  printf( "Digite o valor em GB: " );
  scanf( "%f" , &GB );

  float bytes = GB * 1024 * 1024 * 1024;
  printf("o valor em bytes é: %f\n", bytes);
  return 0;
}