#include <stdio.h>
#include <string.h>
int main(){     //0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0  
  char nome[30]; 
  printf("Entre com seu nome: ");
  int ok = scanf("%[^\n]s", nome);

  printf("Olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21]

  strcpy(nome, primeiro_nome);
  strcpy(nome, ultimo_nome);
  int tamanho = strlen(nome);
  printf("Seu nome tem %i caracteres\n", tamanho);
  printf("As strings são iguais? %i\n", strcmp(primeiro_nome, ultimo_nome));

  return 0;
}