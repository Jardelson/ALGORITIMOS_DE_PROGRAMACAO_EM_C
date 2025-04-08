#include <stdio.h>#include <stdio.h>

int main() {
    char string[] = "Exercicio de APC II"; // String fornecida
    char *ptr = string; // Ponteiro apontando para o início da string
    char caractere;
    char *ultima_ocorrencia = NULL; // Para armazenar a última ocorrência do caractere

    // Solicita o caractere ao usuário
    printf("Digite um caractere para buscar: ");
    if (scanf(" %c", &caractere) != 1) { // Verifica se a leitura foi bem-sucedida
        printf("Erro ao ler o caractere\n");
        return 1; // Termina o programa em caso de erro
    }

    // Percorre a string usando notação de ponteiro
    while (*ptr != '\0') {
        if (*ptr == caractere) {
            ultima_ocorrencia = ptr; // Atualiza a última ocorrência
        }
        ptr++; // Avança o ponteiro
    }

    // Verifica se o caractere foi encontrado
    if (ultima_ocorrencia != NULL) {
        printf("Última ocorrência do caractere '%c' encontrada no endereço: %p\n", caractere, (void*)ultima_ocorrencia);
    } else {
        printf("Caractere não encontrado\n");
    }

    return 0;
}

int main() {
    char string[50] = "Avaliacao 2"; 
    int i = 0;
    while (string[i] != '\0') {
        printf("string[%d]: %c\n", i, string[i]);
        i++;
    }

    return 0;
}





