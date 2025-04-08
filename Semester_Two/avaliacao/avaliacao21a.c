#include <stdio.h>

int main() {
    int vet[8] = {4, 6, 3, 8, 2, 5, 9, 1};
    int *ptr = vet; // Ponteiro apontando para o início do vetor

    for(int i = 0; i < 8; i++) {
        printf("vet[%d]: %d\n", i, *(ptr + i)); // Acessando os elementos do vetor via ponteiro
    }

    return 0;
}
