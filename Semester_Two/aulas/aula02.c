#include <stdio.h>
int main(void) {
  
  int n = 0x04030201;

  char *p = (char *)&n;
  
  printf("Notação de ponteiros:\n");
  printf("byte 0: %d, byte 1: %d, byte 2: %d, byte 3: %d\n", *p, *(p+1), *(p+2), *(p+3));
  
  printf("Notação de vetor:\n");
  printf("byte 0: %d, byte 1: %d, byte 2: %d, byte 3: %d\n", p[0], p[1], p[2], p[3]);

  int *pint = &n;

  printf("Notação de ponteiro:\n");
  printf("pint: %p (&n), *pint: %d\n", pint, *pint);
  printf("Notação de vetor:\n");
  printf("pint[0]: %p (&n), pint[0]: %d (n)\n", &pint[0], pint[0]);

  int v[10] = {3, 5, 6, 8, 9, 1, 5, 0, 7};
  printf("\n\nRepresentação de vetor:\n");
  printf("v: %p, v[0]: %d\n", &v[0], v[0]);
  printf("v: %p, v[1]: %d\n", &v[1], v[1]);
  printf("v: %p, v[2]: %d\n", &v[2], v[2]);
  
  printf("\n\nRepresentação de ponteiro:\n");
  printf("v+0: %p, *(v+0): %d\n", v+0, *(v+0));
  printf("v+1: %p, *(v+1): %d\n", v+1, *(v+1));
  printf("v+2: %p, *(v+2): %d\n", v+2, *(v+2));

  int *pvet = v;

  printf("\n\nRepresentação de vetor:\n");
  printf("v: %p, v[0]: %d\n", &pvet[0], v[0]);
  printf("v: %p, v[1]: %d\n", &pvet[1], v[1]);
  printf("v: %p, v[2]: %d\n", &pvet[2], v[2]);

  printf("\n\nRepresentação de ponteiro:\n");
  printf("v+0: %p, *(v+0): %d\n", v+0, *(v+0));
  printf("v+1: %p, *(v+1): %d\n", v+1, *(v+1));
  printf("v+2: %p, *(v+2): %d\n", v+2, *(v+2));
  
  return 0;
}