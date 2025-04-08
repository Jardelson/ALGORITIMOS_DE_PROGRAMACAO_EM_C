#include <stdio.h>

struct Pessoa1 {
  char nome[100];       // 100 bytes
  int idade;            //   4 bytes
  char genero; // M, F  //   1 byte
};                      //   105 total

struct Pessoa2 {
  char nome[100];       // 100 bytes
  int idade;            //   4 bytes
  char genero; // M, F  //   1 byte
char byte2, byte3;      //   2 bytes
};                      //   107 total

struct Pessoa3 {
  char nome[100];       // 100 bytes
  int idade;            //   4 bytes
  char genero; // M, F  //   1 byte
char byte2, byte3;      //   2 bytes
char byte4, byte5;      //   2 bytes
};                      //   109 total 