/*Todos os temas
Atividade
Atividade em Sala - Arquivos
Sem data de entrega
Item postado: 10:28
Atribuído
Complete as funções de leitura e escrita abaixo.
- Crie o diretório "./data" no seu espaço de trabalho.*/

#include <stdio.h>

// leitura
void exemplo1() {
    FILE *input;
    // abertura do arquivo
    input = fopen("./data/notas.txt", "r");
    // if(input == NULL) {
    if(!input) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // leitura
  void exemplo1() {
    FILE *input;
    input = fopen("./data/notas.txt", "r");
    if(!input) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }

    float nota1, nota2;
    int aluno = 1;
    // extraia do arquivo as notas separadas por tabulação,
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        fprintf(out, "%.2f", notas[i][j]);
        if (j < n - 1) {
            fprintf(out, "\t");
        }
    }
    fprintf(out, "\n");
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

  exemplo2(4, 2, notas); // Grava as notas em file.txt
  exemplo1(); // Lê e exibe a média das notas em notas.txt

  return 0;
  }
    // para cada linha. Após, a extração exiba a média das notas
    // de cada aluno.
    // feof()
    // fscanf

    fclose(input);
}

// escrita
void exemplo2(int m, int n,float notas[m][n]) {
    FILE *out;
    out = fopen("./data/file.txt", "w");
    // if(out == NULL)
    if(!out) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // escrita
  void exemplo2(int m, int n, float notas[m][n]) {
    FILE *out;
    out = fopen("./data/file.txt", "w");
    if(!out) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // Salvar um vetor de notas no arquivo

    // Para cada linha, salvar as duas notas
    // separadas por tabulação ('\t')
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < n; j++) {
          fprintf(out, "%.2f", notas[i][j]);
          if (j < n - 1) {
              fprintf(out, "\t");
          }
      }
      fprintf(out, "\n");
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

    exemplo2(4, 2, notas); // Grava as notas em file.txt
    exemplo1(); // Lê e exibe a média das notas em notas.txt

    return 0;
    }
