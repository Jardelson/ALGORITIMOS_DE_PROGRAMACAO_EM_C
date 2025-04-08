#ifndef CALCULADORA_H
#define CALCULADORA_H 1

typedef struct calculadora Calculadora;

Calculadora* criar();
void destruir(Calculadora* c);
void exibir(Calculadora* c);
void zerar(Calculadora* c);
void somar(Calculadora* c, int valor);
void subtrair(Calculadora* c, int valor);
void multiplicar(Calculadora* c, int valor);
void dividir(Calculadora* c, int valor);

#endif // CALCULADORA_H