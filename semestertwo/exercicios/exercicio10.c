#include <stdio.h>

// leitura
void exemplo1() {
    FILE *input;
    input = fopen("./data/notas.txt", "r");
    if(!input) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }

    // Lógica de leitura e cálculo da média pode ser implementada aqui.

    fclose(input);
}

// escrita
void exemplo2(int m, int n, float notas[m][n]) {
    FILE *out;
    out = fopen("./data/file.txt", "w");
    if(!out) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }

    // Escrita das notas no arquivo
    for(int aluno = 0; aluno < m; aluno++) {
        fprintf(out, "%.2f\t%.2f\n", notas[aluno][0], notas[aluno][1]);
        fflush(out);
    }

    fclose(out);
}

int main() {
    float notas[4][2] = {
        {7, 8},
        {4, 3},
        {9, 9.5},
        {3, 7}
    };

    exemplo2(4, 2, notas); // Grava as notas no arquivo

    return 0;
}
