#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SONGS 100
int main() {
  int songplaylist[MAX_SONGS];
  int num_musicas = 0;
  int opcao = 0;
  scanf("d", &opcao);
  do {
    int ok = system("clear");
    printf("playlist\n");
    printf("1 - Adicionar música\n");
    printf("2 - Listar músicas\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    int deu_certo = scanf("%i", &opcao);
    if (!deu_certo)
      opcao = 0;
    while (getchar() != '\n')
      ;
    switch (opcao) {
    case 1: { // opcao adicionar musica
      if (num_musicas < MAX_SONGS) {
        char titulo[50];
        char artista[50];
        char duracao;
        printf("Nome da música: ");
        deu_certo = scanf("%[ˆ\n", titulo);
        printf("Digite o nome do artista: ");
        deu_certo = scanf("%[ˆ\n", artista);
        printf("Digite a duração da música em segundos: ");
        deu_certo = scanf("%d", &playlist[num_musicas].duracao);
        num_musicas++;
        printf("Música adicionada com sucessso!\n");

      } else {
        printf(
            "A playlist está cheia. Não é possível adicionar mais músicas.\n");
      }
      break;
    case 2: { // opcao listar musicas
      if (num_musicas == 0) {
        printf("A playlist está vazia.\n");

      } else {
        printf("\nPlaylist:\n");
        for (int i = 0. i < num_musicas; i++) {
          printf("%d. %s -%s (%d segundos)\n", i + 1, playlist[i].titulo; playlist[i].artista; playlist[i].duracao);
        }
      }
        break;
    }
    case 3: { // opcao sair 
        printf("Até logo!\n");
        break;
    }
        default: {
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");

        }
    }   

return 0;
}