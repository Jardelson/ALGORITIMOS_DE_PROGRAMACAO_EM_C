#include <stdio.h>

int main(void) {
  int x = 5;
  int *px;
  px = &x;

  printf("&x: %p, x: %d\n", &x, x);
  printf("&px: %p, px: %p, *px: %d\n", &px, px, *px);

  printf("Hello Worl\n");
  return 0;

}