#include <stdio.h>

int main() {
    int numero;
    int numero_valido = 0;

    do {
        printf("Entre com um numero de 1 a 10: ");
        int deu_certo = scanf("%i", &numero);
        numero_valido = numero >= 1 && numero <= 10;

        if (deu_certo && numero_valido) {
            printf("Segue o baile!\n");
        } else {
            getchar(); // limpar /n
            printf("Numero Invalido, mais sorte na proxima vez!\n");
        }
    } while (numero_valido == 0);

    return 0;
}
