#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    int dicas = 0;

    srand(time(NULL));

    printf("Seja bem-vindo ao jogo de adivinhação!\n");

    while (1) {
        numero = rand() % 101;

        printf("Digite seu nome: ");
        if (scanf("%s", nome) != 1) {
            printf("Erro na leitura do nome. Tente novamente.\n");
            continue;
        }

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
        printf("A qualquer momento, você pode digitar 'dica' para receber uma dica. Entretanto isso contará como uma tentativa.\n");

        tentativas = 0;
        dicas = 0;

        while (1) {
            printf("Digite sua tentativa ou 'dica' para uma dica: ");
            if (scanf("%s", opcao) != 1) {
                printf("Erro na leitura da opção. Tente novamente.\n");
                continue;
            }

            if (strcasecmp(opcao, "dica") == 0) {
                if (tentativas == 0) {
                    printf("Você deve fazer pelo menos uma tentativa antes de pedir uma dica.\n");
                    continue;
                }
                tentativas++;
                dicas++;
                if (dicas == 1) {
                    int esquerda = (numero - 11 < 0) ? 0 : numero - 11;
                    int direita = (numero + 13 > 100) ? 100 : numero + 13;
                    printf("O número está entre %d e %d.\n", esquerda, direita);
                } else if (dicas == 2) {
                    int esquerda = (numero - 4 < 0) ? 0 : numero - 4;
                    int direita = (numero + 5 > 100) ? 100 : numero + 5;
                    printf("O número está entre %d e %d.\n", esquerda, direita);
                } else if (dicas == 3) {
                    printf("Tá de brincadeira, quiser a resposta fala logo.\n");
                } else {
                    printf("Não há mais dicas disponíveis.\n");
                }
                continue;
            }

            tentativa = atoi(opcao);
            if (tentativa < 0 || tentativa > 100) {
                printf("Opção inválida. O número deve estar entre 0 e 100.\n");
                continue;
            }
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
                printf("Está morno.\n");
            } else if (diferenca > 5) {
                printf("Está quente.\n");
            } else if (diferenca > 3) {
                printf("Está muito quente!\n");
            } else if (diferenca == 2) {
                printf("Mais quente que isso só Dallol, localizada no deserto.\n");
            } else {
                printf("Está pegando fogo!\n");
            }
        }

        printf("Deseja adicionar mais um jogador? (s/n): ");
        if (scanf("%s", opcao) != 1) {
            printf("Erro na leitura da opção. Tente novamente.\n");
            continue;
        }

        if (strcasecmp(opcao, "n") == 0) {
            break;
        }
    }

    struct Jogador temp;
    for (int i = 0; i < num_jogadores - 1; i++) {
        for (int j = 0; j < num_jogadores - i - 1; j++) {
            if (ranking[j].tentativas > ranking[j + 1].tentativas) {
                temp = ranking[j];
                ranking[j] = ranking[j + 1];
                ranking[j + 1] = temp;
            }
        }
    }

    printf("\nRanking dos Jogadores:\n");
    for (int i = 0; i < num_jogadores; i++) {
        printf("%d. %s - %d tentativas\n", i + 1, ranking[i].nome, ranking[i].tentativas);
    }

    return 0;
}
