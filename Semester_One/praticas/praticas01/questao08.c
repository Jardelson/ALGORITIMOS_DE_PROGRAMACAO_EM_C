/* 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos). */
#include <stdio.h>

void converteTempo(int segundos, int *horas, int *minutos, int *segundos_restantes) {
    *horas = segundos / 3600;
    *minutos = (segundos % 3600) / 60;
    *segundos_restantes = segundos % 60;
}

int main() {
    int segundos, horas, minutos, segundos_restantes;


    printf("Insira o tempo em segundos: ");
    scanf("%d", &segundos);


    converteTempo(segundos, &horas, &minutos, &segundos_restantes);


    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_restantes);

    return 0;