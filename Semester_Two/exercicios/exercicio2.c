#include <stdio.h>

int main(void) {

  printf("sizeof(int): %d\n", (int)sizeof(int));
  printf("sizeof(char): %d\n", (int)sizeof(char));
  printf("sizeof(float): %d\n", (int)sizeof(float));
  printf("sizeof(double): %d\n", (int)sizeof(double));

  int inteiro = 100; // &inteiro = 0x100
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro + 1, inteiro + 20);
  printf("i: %d, i-1: %d, i-20: %d\n", inteiro, inteiro - 1, inteiro - 20);

  short int *pint = (short int *)&inteiro;
  printf("pint: %ul, pint+1: %ul, pint+20: %ul\n", pint, pint + 1, pint + 20);
  printf("pint: %ul, pint-1: %ul, pint-20: %ul\n", pint, pint - 1, pint - 20);


  char *pchar = (char *)&inteiro;
  printf("pchar: %ul, pchar+1: %ul, pchar+20: %ul\n", pchar, pchar + 1,
         pchar + 20);
  printf("pchar: %ul, pchar-1: %ul, pchar-20: %ul\n", pchar, pchar - 1,
         pchar - 20);

  return 0;
}