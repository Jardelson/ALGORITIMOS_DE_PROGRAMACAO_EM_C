#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

const char* getResponse() {
    static const char* responses[] = {
        "Sim",
        "Não",
        "Talvez",
        "Pode ser",
        "Melhor não contar com isso",
        "Não conte com isso",
        "É certo",
        "Concentre-se e pergunte novamente",
        "Minha resposta é não",
        "Não posso prever agora",
        "É melhor não te dizer agora",
        "Aguarde e verá",
        "Definitivamente sim",
        "Definitivamente não"
        "Quase certeza"
    };

    int numResponses = sizeof(responses) / sizeof(responses[0]);
    int randomIndex = rand() % numResponses;
    return responses[randomIndex];
}

int main() {
    srand(time(NULL));
    char question[100];

    printf("Bem-vindo ao programa de respostas!\n");

    while (1) {
        printf("Faça uma pergunta (ou digite 'sair' para encerrar): ");
        if (fgets(question, sizeof(question), stdin) == NULL) {
            break; // Se houver erro de entrada, saia do loop
        }

        if (strcmp(question, "sair\n") == 0) {
            printf("Obrigado por usar o programa de respostas. Até mais!\n");
            break;
        }

        printf("Resposta: %s\n", getResponse());
    }

    return 0;
}
