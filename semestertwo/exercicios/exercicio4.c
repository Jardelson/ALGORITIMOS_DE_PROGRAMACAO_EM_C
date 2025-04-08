//Discuta em duplas e faça um relatório para entrega individual do que acontece na diferença dos seguintes trechos de código:
#include <stdio.h>
int main(void) {
  int vet[10] = {3, 5, 6, 2, 8, 9, 1, 5, 0, 7};

  int *p = vet; // p = &vet[0];
  printf("Representação de vetor: \n");
  printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
  printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
  printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);
  printf("Representação de ponteiro:\n");
  printf("p: %p, *p: %d\n", p, *p); // vet[0]
  printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); // vet[1]
  printf("p+2: %p, *(p+2): %d\n", p+2, *(p+2)); // vet[2]

  int *p2 = &vet[5];
  printf("Representação de vetor: \n");
  printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]);
  printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);
  printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);
  printf("Representação de ponteiro:\n");
  printf("p2: %p, *p: %d\n", p2, *p2);
  printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));
  printf("p2+2: %p, *(p2+2): %d\n", p2+2, *(p2+2));
  printf("p2+3: %p, *(p2+3): %d\n", p2+3, *(p2+3));
  printf("p2+4: %p, *(p2+4): %d\n", p2+4, *(p2+4));
  
//Explique o resultado obtido a seguir:

  printf("Representação de vetor: \n");
  printf("&p2[-1]: %p, p2[-1]: %d\n", &p2[-1], p2[-1]);  printf("p2-1: %p, *(p2-1): %d\n", p2-1, *(p2-1));

  return 0;
}