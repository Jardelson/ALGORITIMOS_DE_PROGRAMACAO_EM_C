#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

// Função para imprimir o tabuleiro
void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar o vencedor
char checkWinner(char board[SIZE][SIZE]) {
    // Verifica linhas e colunas
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }

    // Verifica diagonais
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];

    // Verifica empate
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ')
                return ' '; // Jogo ainda não terminou
        }
    }

    return 'D'; // Empate
}

int main() {
    char board[SIZE][SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int row, col;
    char currentPlayer = 'X';
    char winner = ' ';

    while (1) {
        // Limpa a tela (no Windows, use "cls")
        system("clear");

        // Imprime o tabuleiro
        printBoard(board);

        // Verifica se há um vencedor
        winner = checkWinner(board);
        if (winner != ' ') {
            if (winner == 'D')
                printf("O jogo terminou em empate!\n");
            else
                printf("O jogador %c venceu!\n", winner);
            break;
        }

        // Lê a jogada do jogador atual
        printf("Jogador %c, insira a linha (0, 1, 2): ", currentPlayer);
        scanf("%d", &row);
        printf("Jogador %c, insira a coluna (0, 1, 2): ", currentPlayer);
        scanf("%d", &col);

        // Verifica se a jogada é válida
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
            board[row][col] = currentPlayer;

            // Alterna o jogador
            if (currentPlayer == 'X')
                currentPlayer = 'O';
            else
                currentPlayer = 'X';
        } else {
            printf("Jogada inválida! Tente novamente.\n");
            getchar(); // Pausa para leitura da mensagem de erro
        }
    }

    return 0;
}
