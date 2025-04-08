#include <stdio.h>

int main() {
    char string[50] = "Exercicio de APC II";
    char *ptr = string;
    char caractere;
    char *ultima_ocorrencia = NULL;
    int i = 0;

    printf("Digite um caractere para buscar: ");
    if (scanf(" %c", &caractere) != 1) {
        printf("Erro ao ler o caractere.\n");
        caractere = '\0';
    }
    while (*(ptr + i) != '\0') {
        if (*(ptr + i) == caractere) {
            ultima_ocorrencia = ptr + i;
        }
        i++;
    }

    if (ultima_ocorrencia != NULL) {
        int indice = ultima_ocorrencia - string;
        printf("Última ocorrência do caractere '%c' encontrada no índice: %d\n", caractere, indice);
        printf("Endereço da última ocorrência: %p\n", (void*)ultima_ocorrencia);
    } else {
        printf("Caractere não encontrado\n");
    }

    return 0;
}
