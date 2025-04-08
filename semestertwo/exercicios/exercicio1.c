#include <stdio.h>

int main(void) {
    int i = 5;
    int *p;
    p = NULL; // p = 0x0000; p = 0
    p = &i;

    // Imprime o endereço de p
    printf("&p: %p\n", &p);
    // Imprime o endereço de i (o valor de p)
    printf("p (&i - endereço de i): %p\n", p);
    // Imprime o valor de i
    printf("*p (i - valor de i): %d\n", *p);

    *p = 7; // Atualiza o valor de i para 7
    // Imprime o valor de i após a atualização
    printf("*p (i - valor de i após *p = 7): %d (i: %d)\n", *p, i);

    printf("Introduza um novo valor para i: ");
    // Lê um novo valor inteiro para o local apontado por p
    scanf("%d", p); // Atualiza o valor de i através do ponteiro p

    // Imprime o valor atualizado de i
    printf("Valor de i após scanf: %d\n", i);

    return 0;
}
