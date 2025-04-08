#include <stdio.h>
#include <string.h>

void conjugateAR(char verb[]) {
    // Verifica se o verbo termina em "AR"
    if (strcmp(&verb[strlen(verb) - 2], "AR") != 0) {
        printf("O verbo fornecido não termina em 'AR'.\n");
        return;
    }

    // Remove "AR" do final do verbo
    verb[strlen(verb) - 2] = '\0';

    // Imprime a conjugação no presente do indicativo
    printf("EU %sO\n", verb);
    printf("TU %sAS\n", verb);
    printf("ELE %sA\n", verb);
    printf("NÓS %sAMOS\n", verb);
    printf("VÓS %sAIS\n", verb);
    printf("ELES %sAM\n", verb);
}

int main() {
    char verb[50];

    // Solicita o verbo ao usuário
    printf("Digite um verbo terminado em 'AR': ");
    if (scanf("%s", verb) != 1) {
        printf("Erro ao ler o verbo.\n");
        return 1; // Ou qualquer outro código de erro que você preferir
    }



    // Conjugação e impressão
    conjugateAR(verb);

    return 0;
}
