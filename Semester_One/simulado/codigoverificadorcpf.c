#include <stdio.h>
#include <string.h>

// Função para calcular o primeiro dígito verificador do CPF
int calcular_primeiro_digito(char* cpf) {
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int resto = soma % 11;
    if (resto < 2) {
        return 0;
    } else {
        return 11 - resto;
    }
}

// Função para calcular o segundo dígito verificador do CPF
int calcular_segundo_digito(char* cpf) {
    int soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int resto = soma % 11;
    if (resto < 2) {
        return 0;
    } else {
        return 11 - resto;
    }
}

int main() {
    char cpf[12]; // CPF de até 11 dígitos + '\0' terminador de string

    printf("Digite os primeiros 9 dígitos do CPF: ");
    scanf("%9s", cpf); // Ler no máximo 9 caracteres

    // Calcular o primeiro dígito verificador
    int primeiro_digito = calcular_primeiro_digito(cpf);
    cpf[9] = primeiro_digito + '0'; // Adiciona o primeiro dígito verificador à string

    // Calcular o segundo dígito verificador
    int segundo_digito = calcular_segundo_digito(cpf);
    cpf[10] = segundo_digito + '0'; // Adiciona o segundo dígito verificador à string
    cpf[11] = '\0'; // Terminar a string

    printf("CPF completo com dígitos verificadores: %s\n", cpf);

    return 0;
}
