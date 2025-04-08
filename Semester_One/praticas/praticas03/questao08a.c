#include <stdio.h>

int main() {
    int numero;
    printf("Entre com um numero inteiro: ");
    int deu_certo = scanf("%i", &numero);

    if (deu_certo) {
        // Verifica se o número é negativo
        if (numero < 0) {
            printf("Erro: O fatorial não pode ser calculado para números negativos.\n");
        } else {
            int fatorial = 1;
            // Calcula o fatorial usando um loop for
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            printf("O fatorial de %d é %d.\n", numero, fatorial);
        }
    } else {
        printf("Número Inválido, insira um número inteiro.\n");
    }

    return 0;
}
