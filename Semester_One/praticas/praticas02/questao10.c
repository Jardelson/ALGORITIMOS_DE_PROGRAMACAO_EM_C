//Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
#include <stdio.h>

int main() {
    int numero, resultado;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    int ok = scanf("%d", &numero);

    // Imprime a tabuada de multiplicação do número fornecido
    printf("Tabuada de multiplicacao de %d:\n", numero);

    // Multiplica o número pelo valor de i, onde i varia de 1 a 10, e imprime o resultado
    resultado = numero * 1;
    printf("%d x 1 = %d\n", numero, resultado);

    resultado = numero * 2;
    printf("%d x 2 = %d\n", numero, resultado);

    resultado = numero * 3;
    printf("%d x 3 = %d\n", numero, resultado);

    resultado = numero * 4;
    printf("%d x 4 = %d\n", numero, resultado);

    resultado = numero * 5;
    printf("%d x 5 = %d\n", numero, resultado);

    resultado = numero * 6;
    printf("%d x 6 = %d\n", numero, resultado);

    resultado = numero * 7;
    printf("%d x 7 = %d\n", numero, resultado);

    resultado = numero * 8;
    printf("%d x 8 = %d\n", numero, resultado);

    resultado = numero * 9;
    printf("%d x 9 = %d\n", numero, resultado);

    resultado = numero * 10;
    printf("%d x 10 = %d\n", numero, resultado);

    return 0;
}
