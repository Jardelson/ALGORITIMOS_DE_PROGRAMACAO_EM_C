#include <stdio.h>

int main(void) {
  int num[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
  };

  printf("Linhas e colunas:\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      printf("num[%d][%d]: %d\n", i, j, num[i][j]);
    }
  }
  int *p = (int *)num;
  for(int i = 0; i < 3*4; i++) {
    printf("p[%d]: %d\n", i, p[i]);
  }

  for(int lin = 0; lin < 3; lin++) {
    for(int col = 0; col < 4; col++) {
      printf("num[%d][%d]: %d\n", lin, col, p[lin*4 + col]); // ou *(p+(lin*4)+col)
    }
  }
  return 0;
}