#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  do {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção =>");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ; // limpar buffer do teclado

    switch (opcao) {
    case 1: {
      char nome[100];
      printf("Digite seu nome: ");
      deu_certo = scanf("%s", nome);
      while (getchar() != '\n')
        ;
      printf("Bem vindo %s\n", nome);
      printf("Pressiona ENTER para continuar...");
      break;
    }
    case 2: {
      deu_certo = system("clear");
      printf("Resultado\n");
      printf("1° lugar -  Jose   - 1000\n");
      printf("2° lugar -  Maria  - 900\n");
      printf("3° lugar -  Pedro  - 800\n");
      printf("4° lugar -  Ana    - 700\n");
      printf("5° lugar -  Mateus - 600\n");
      printf("Pressiona ENTER para continuar...");
      getchar();
      break;
    }
    case 3:
      break;
    case 4:
      break;
    default:
      printf("Opção invalida! Pressione ENTER p/ continuar");
      getchar();
    }
  } while (opcao != 4);

  return 0;
}