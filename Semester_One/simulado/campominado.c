#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 5

void initializeBoard(char board[][BOARD_SIZE]) {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '~'; // Água
        }
    }
}

void printBoard(char board[][BOARD_SIZE]) {
    int i, j;
    printf("  ");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void placeShips(char board[][BOARD_SIZE]) {
    int i;
    srand(time(NULL));
    for (i = 0; i < BOARD_SIZE; i++) {
        int x = rand() % BOARD_SIZE;
        int y = rand() % BOARD_SIZE;
        board[x][y] = 'S'; // Navio
    }
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    int x, y;

    initializeBoard(board);
    placeShips(board);

    printf("Bem-vindo ao Batalha Naval!\n");
    printf("Tente adivinhar a posição dos navios. Use coordenadas de 0 a %d.\n", BOARD_SIZE - 1);
    printf("Você tem %d tentativas.\n", BOARD_SIZE * BOARD_SIZE);

    int attempts = 0;
    while (attempts < BOARD_SIZE * BOARD_SIZE) {
        printf("Tentativa %d:\n", attempts + 1);
        printBoard(board);
        printf("Digite as coordenadas (x y): ");
        if (scanf("%d %d", &x, &y) != 2) {
            printf("Entrada inválida. Por favor, insira duas coordenadas válidas.\n");
            continue;
        }

        if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) {
            printf("Coordenadas inválidas. Tente novamente.\n");
            continue;
        }

        if (board[x][y] == 'S') {
            printf("Você acertou!\n");
            board[x][y] = 'X'; // Marcar como acertado
        } else if (board[x][y] == 'X') {
            printf("Você já tentou essa posição. Tente novamente.\n");
            continue;
        } else {
            printf("Você errou.\n");
            board[x][y] = 'O'; // Marcar como tentativa falha
        }

        attempts++;

        int shipsLeft = 0;
        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                if (board[i][j] == 'S') {
                    shipsLeft++;
                }
            }
        }

        if (shipsLeft == 0) {
            printf("Parabéns! Você destruiu todos os navios.\n");
            break;
        }
    }

    if (attempts == BOARD_SIZE * BOARD_SIZE) {
        printf("Você não conseguiu destruir todos os navios. Game over!\n");
    }

    return 0;
}
