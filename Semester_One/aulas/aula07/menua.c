#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao = 0;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual
    int numeroSecreto = (rand() % 100) + 1; // Gera um número aleatório entre 1 e 100

    do {
        int deu_certo = system("clear");
        printf("JOGO DE ADIVINHAÇÃO\n");
        printf("1 - Jogar\n");
        printf("2 - Sair\n");
        printf("3 - Ajuda\n");
        printf("Escolha uma opção => ");
        deu_certo = scanf("%i", &opcao);
        while (getchar() != '\n')
            ; // Limpar buffer do teclado

        switch (opcao) {
            case 1: {
                int palpite;
                int tentativas = 0;
                do {
                    printf("Digite seu palpite (entre 1 e 100): ");
                    deu_certo = scanf("%i", &palpite);
                    while (getchar() != '\n')
                        ; // Limpar buffer do teclado

                    if (palpite < numeroSecreto) {
                        printf("Tente um número maior!\n");
                    } else if (palpite > numeroSecreto) {
                        printf("Tente um número menor!\n");
                    } else {
                        printf("Parabéns! Você acertou o número em %d tentativas!\n", tentativas);
                        break; // Sai do loop do-while
                    }
                    tentativas++;
                } while (1); // Loop infinito até o jogador acertar
                printf("Pressione ENTER para continuar...");
                getchar(); // Aguarda a entrada do usuário
                break;
            }
            case 2:
                printf("Até logo!\n");
                break;
            case 3:
                printf("AJUDA:\n");
                printf("O objetivo do jogo é adivinhar um número secreto entre 1 e 100.\n");
                printf("Pressione ENTER para continuar...");
                getchar(); // Aguarda a entrada do usuário
                break;
            case 4:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opção inválida! Pressione ENTER para continuar\n");
                getchar();
        }
    } while (opcao != 4);

    return 0;
}
