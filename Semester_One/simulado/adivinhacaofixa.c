#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Jogador {
    char nome[50];
    int tentativas;
};

int main() {
    struct Jogador ranking[100];
    int num_jogadores = 0;
    char nome[50];
    int numero, tentativa, tentativas;
    int nome_existente;
    char opcao[10];

    printf("Seja bem-vindo ao jogo de adivinhação!\n");

    while (1) {
        numero = rand() % 101;

        printf("Digite seu nome: ");
        scanf("%s", nome);

        nome_existente = 0;
        for (int i = 0; i < num_jogadores; i++) {
            if (strcmp(ranking[i].nome, nome) == 0) {
                nome_existente = 1;
                break;
            }
        }

        if (nome_existente) {
            printf("Nome já escolhido! Tente outro nome.\n");
            continue;
        }

        printf("Bem-vindo, %s!\n", nome);
        printf("Vou pensar em um número entre 0 e 100, e você deve adivinhar qual é.\n");

        tentativas = 0;

        while (1) {
            printf("Digite sua tentativa: ");
            scanf("%d", &tentativa);
            tentativas++;

            if (tentativa == numero) {
                printf("Parabéns! Você acertou!\n");
                strcpy(ranking[num_jogadores].nome, nome);
                ranking[num_jogadores].tentativas = tentativas;
                num_jogadores++;
                break;
            }

            int diferenca = tentativa - numero;
            if (diferenca < 0) {
                diferenca = -diferenca;
            }

            if (diferenca > 50) {
                printf("Mais frio que isso só o inverno em Oymyakon na Rússia!\n");
            } else if (diferenca > 30) {
                printf("Frio demais!\n");
            } else if (diferenca > 20) {
                printf("Está frio.\n");
            } else if (diferenca > 10) {
                printf("Está quente.\n");
            } else if (diferenca > 5) {
                printf("Nossa, como tá quente aqui!\n");
            } else {
                printf("Mais quente que isso só Dallol, localizada no deserto.\n");
            }
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf("%s", opcao);

        if (strcasecmp(opcao, "n") == 0) {
            break;
        }
    }

    printf("\nRanking dos Jogadores:\n");
    for (int i = 0; i < num_jogadores; i++) {
        printf("%d. %s - %d tentativas\n", i + 1, ranking[i].nome, ranking[i].tentativas);
    }

    printf("Obrigado por jogar!\n");

    return 0;
}
