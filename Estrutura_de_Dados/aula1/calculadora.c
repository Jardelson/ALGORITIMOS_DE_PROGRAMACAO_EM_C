#include <stdio.h>
#include <stdlib.h>

#include "Calculadora.h"

struct calculadora {
    float memoria;
};

Calculadora* criar() {
    Calculadora *c = (Calculadora *) malloc(sizeof(Calculadora));
    if (c != NULL) {
        c->memoria = 0;
    }
    return c;
}

void destruir(Calculadora *c) {
    free(c);
}


void exibir(Calculadora* c) {
    if(!c) return;
    printf("Memoria: %f\n", c->memoria);
}

void zerar(Calculadora* c) {
    if(!c) return;
    c->memoria = 0;
}

void somar(Calculadora* c, int valor) {
    if(!c) return;
    c->memoria += valor;
}

void subtrair(Calculadora* c, int valor) {
    if(!c) return;
    c->memoria -= valor;
}

void multiplicar(Calculadora* c, int valor) {
    if(!c) return;
    c->memoria *= valor;
}

void dividir(Calculadora* c, int valor) {
    if(!c) return;
    if(valor == 0) {
        printf("Divisão ilegal por zero\n");
        return;
    }
    c->memoria /= valor;
}