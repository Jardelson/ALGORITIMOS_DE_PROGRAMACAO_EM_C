#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           //   4 bytes
  char genero; // M, F //   1 byte
};

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

  printf("Acessando dados de pessoa1:\n");
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  struct Pessoa pessoa2;
  // Solicite ao usuário a entrada do nome, idade e genero.
  printf("\nInsira os dados da pessoa2:\n");

  printf("Nome: ");
  scanf("%s", pessoa2.nome);

  printf("Idade: ");
  scanf("%d", &pessoa2.idade);

  printf("Gênero (M/F): ");
  scanf(" %c", &pessoa2.genero);

  // Em seguida exiba esses dados de volta pro console.
  printf("\nDados inseridos para pessoa2:\n");
  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);

  return 0;
} 