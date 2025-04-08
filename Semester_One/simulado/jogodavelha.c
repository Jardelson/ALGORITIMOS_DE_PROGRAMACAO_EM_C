#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, c, linha, coluna, jogador, ganhou, jogadas, opcao;
    char jogo[3][3];

    opcao = 1; // Inicializa a opção para entrar no loop do jogo

    while (opcao == 1) {
        jogador = 1;
        ganhou = 0;
        jogadas = 0;

        // Inicializa o tabuleiro
        for (l = 0; l < 3; l++) {
            for (c = 0; c < 3; c++) {
                jogo[l][c] = ' ';
            }
        }

        while (ganhou == 0 && jogadas < 9) {
            // Imprime o tabuleiro
            printf("\n\n\t 0   1   2\n\n");
            for (l = 0; l < 3; l++) {
                for (c = 0; c < 3; c++) {
                    if (c == 0)
                        printf("\t");
                    printf(" %c ", jogo[l][c]);
                    if (c < 2)
                        printf("|");
                    if (c == 2)
                        printf("  %d", l);
                }
                if (l < 2)
                    printf("\n\t-----------");
                printf("\n");
            }

            // Lê coordenadas
            do {
                printf("\nJOGADOR 1 = 0\nJOGADOR 2 = X\n");
                printf("JOGADOR %d: Digite primeiro a coluna depois a linha que deseja jogar: ", jogador);
                if (scanf("%d%d", &coluna, &linha) != 2) {
                    // Limpa a entrada inválida
                    while (getchar() != '\n');
                    printf("Entrada inválida! Digite números inteiros.\n");
                    linha = coluna = -1; // Define valores inválidos para repetir a leitura
                } else if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
                    printf("Valores fora do permitido! Digite valores entre 0 e 2.\n");
                } else if (jogo[linha][coluna] != ' ') {
                    printf("Posição já ocupada! Escolha outra posição.\n");
                }
            } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            // Salva coordenadas
            if (jogador == 1) {
                jogo[linha][coluna] = '0';
                jogador = 2;
            } else {
                jogo[linha][coluna] = 'X';
                jogador = 1;
            }
            jogadas++;

            // Verifica se alguém ganhou por linha
            for (l = 0; l < 3; l++) {
                if (jogo[l][0] == jogo[l][1] && jogo[l][1] == jogo[l][2] && jogo[l][0] != ' ') {
                    ganhou = 1;
                }
            }

            // Verifica se alguém ganhou por coluna
            for (c = 0; c < 3; c++) {
                if (jogo[0][c] == jogo[1][c] && jogo[1][c] == jogo[2][c] && jogo[0][c] != ' ') {
                    ganhou = 1;
                }
            }

            // Verifica se alguém ganhou na diagonal principal
            if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] != ' ') {
                ganhou = 1;
            }

            // Verifica se alguém ganhou na diagonal secundária
            if (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && jogo[0][2] != ' ') {
                ganhou = 1;
            }

            // Verifica se alguém ganhou e imprime a mensagem
            if (ganhou == 1) {
                printf("\nParabéns! O jogador %d venceu!\n", jogador == 1 ? 2 : 1);
            }
        }

        // Imprime o tabuleiro final
        printf("\n\n\t 0   1   2\n\n");
        for (l = 0; l < 3; l++) {
            for (c = 0; c < 3; c++) {
                if (c == 0)
                    printf("\t");
                printf(" %c ", jogo[l][c]);
                if (c < 2)
                    printf("|");
                if (c == 2)
                    printf("  %d", l);
            }
            if (l < 2)
                printf("\n\t-----------");
            printf("\n");
        }

        if (ganhou == 0) {
            printf("\nO jogo finalizou sem vencedor!\n");
        }

        printf("\nDigite 1 para jogar novamente: ");
        if (scanf("%d", &opcao) != 1) {
            // Limpa a entrada inválida
            while (getchar() != '\n');
            opcao = 0; // Define um valor diferente de 1 para sair do loop
        }
    }

    return 0;
}
