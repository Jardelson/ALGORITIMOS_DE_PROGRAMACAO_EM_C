#include <stdio.h>

int main() {
    // Declaração das variáveis
    int i, j, k, l;

    // Exibindo os endereços de memória das variáveis
    printf("Endereços de memória das variáveis:\n");
    printf("Endereço de 'i': %p\n", (void*)&i);
    printf("Endereço de 'j': %p\n", (void*)&j);
    printf("Endereço de 'k': %p\n", (void*)&k);
    printf("Endereço de 'l': %p\n", (void*)&l);

    // Opcional: Exibindo os valores das variáveis (inicialmente indefinidos)
    printf("\nValores das variáveis (não inicializadas):\n");
    printf("Valor de 'i': %d\n", i);
    printf("Valor de 'j': %d\n", j);
    printf("Valor de 'k': %d\n", k);
    printf("Valor de 'l': %d\n", l);

    return 0;
}
