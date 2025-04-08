#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

// Função para exibir o labirinto
void displayMaze(char maze[][COLS], int rows, int cols, int posX, int posY) {
    system("clear"); // Limpa a tela (para sistemas Unix)
    //system("cls"); // Para sistemas Windows

    // Exibe o labirinto com a posição atual do jogador
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == posX && j == posY) {
                printf("P "); // Posição do jogador
            } else {
                printf("%c ", maze[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    // Seed para a função rand()
    srand(time(NULL));

    // Labirinto
    char maze[ROWS][COLS];

    // Posição inicial do jogador
    int playerX = rand() % ROWS;
    int playerY = rand() % COLS;

    // Preenche o labirinto com paredes e espaços vazios
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            // Gera aleatoriamente espaços vazios ou paredes
            if (rand() % 4 == 0) {
                maze[i][j] = '#'; // Parede
            } else {
                maze[i][j] = ' '; // Espaço vazio
            }
        }
    }

    // Loop principal do jogo
    while (1) {
        // Exibe o labirinto com a posição atual do jogador
        displayMaze(maze, ROWS, COLS, playerX, playerY);

        // Pede ao jogador para inserir um movimento
        printf("WASD para mover (W - cima, A - esquerda, S - baixo, D - direita): ");
        char move;
        scanf(" %c", &move);

        // Move o jogador de acordo com a entrada do usuário
        switch (move) {
            case 'W':
            case 'w':
                if (playerX > 0) playerX--;
                break;
            case 'A':
            case 'a':
                if (playerY > 0) playerY--;
                break;
            case 'S':
            case 's':
                if (playerX < ROWS - 1) playerX++;
                break;
            case 'D':
            case 'd':
                if (playerY < COLS - 1) playerY++;
                break;
        }
    }

    return 0;
}
