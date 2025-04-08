#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    // Imprime o caractere correspondente na tabela ASCII
    printf("O caractere correspondente na tabela ASCII para o numero %d eh: %c\n", numero, numero);

    return 0;
}
