#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para calcular o dígito verificador
int calcular_digito_verificador(char* numero) {
    int soma_impares = 0;
    int soma_pares = 0;
    int tamanho = strlen(numero);

    // Percorrer os dígitos do número
    for (int i = 0; i < tamanho; i++) {
        int digito = numero[i] - '0';

        // Verificar se a posição é ímpar ou par
        if (i % 2 == 0) {  // Posições ímpares no índice 0-based
            int resultado = digito * 2;
            if (resultado > 9) {
                resultado = (resultado % 9 == 0) ? 9 : resultado % 9;
            }
            soma_impares += resultado;
        } else {  // Posições pares no índice 0-based
            soma_pares += digito;
        }
    }

    // Soma total
    int soma_total = soma_impares + soma_pares;

    // Calcular o dígito verificador
    int digito_verificador = (10 - (soma_total % 10)) % 10;

    return digito_verificador;
}

int main() {
    char numero[17]; // Número de até 16 dígitos + '\0' terminador de string

    printf("Digite a sequência de 16 dígitos: ");
    scanf("%16s", numero); // Ler no máximo 16 caracteres

    int digito_verificador = calcular_digito_verificador(numero);

    printf("O dígito verificador é: %d\n", digito_verificador);

    return 0;
}
