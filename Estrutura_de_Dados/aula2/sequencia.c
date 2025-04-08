#include <stdio.h>

int busca_sequencia(int tam, int vet[tam], int busca) {
  for(int i = 0; i < tam; i++) {
    if(busca == vet[i]) {
      return i; // Encontrado, retorna o índice
    }
  }
  return -1; // Não encontrado
}

int main() {
  int vet[] = {54, 12, 15, 48, 58, 17, 15, 44, 54, 19};
  int tamanho = 10;
  int valor_busca = 44;

  int resultado = busca_sequencia(tamanho, vet, valor_busca);

  if(resultado != -1) {
    printf("Valor %d encontrado no índice %d.\n", valor_busca, resultado);
  } else {
    printf("Valor %d não encontrado no vetor.\n", valor_busca);
  }

  return 0;
}
