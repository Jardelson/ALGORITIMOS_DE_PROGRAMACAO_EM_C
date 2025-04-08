#include <stdio.h>

#include "Calculadora.h"

int main() {
    Calculadora *c = criar();
    exibir(c);
    somar(c, 10);
    exibir(c);
    subtrair(c, 5);
    exibir(c);
    multiplicar(c, 2);
    exibir(c);
    dividir(c, 4);
    exibir(c);
    zerar(c);
    exibir(c);
    destruir(c);
    return 0;
}