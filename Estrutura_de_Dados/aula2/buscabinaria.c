#include <stdio.h>
#include <stdlib.h>

int busca_sequencia(int tam, int vet[tam], int busca) {
  for(int i = 0; i < tam; i++) {
    if(busca == vet[i]) {
      return i; // Encontrado, retorna o índice
    }
  }
  return -1; // Não encontrado
}

int busca_binaria(int tam, int vet[tam], int busca) {
  int inicio = 0;
  int fim = tam - 1;
  while(inicio <= fim) {
    int meio = (inicio + fim) / 2;
    if(busca == vet[meio]) {
      return meio; // Encontrado, retorna o índice
    } else if(busca < vet[meio]) {
      fim = meio - 1;
    } else {
      inicio = meio + 1;
    }
  }
  return -1; // Não encontrado
}

void ordena_vetor(int vet[], int tam) {
  for(int i = 0; i < tam - 1; i++) {
    for(int j = i + 1; j < tam; j++) {
      if(vet[i] > vet[j]) {
        int temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
      }
    }
  }
}

int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1, meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == valor) {
            return meio; // Encontrado, retorna o índice
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1; // Elemento não encontrado
}

int main() {
  int vet[] = {54, 12, 15, 48, 58, 17, 15, 44, 54, 19};
  int tamanho = 10;
  int valor_busca = 44;

  // Exemplo de busca linear
  int resultado_sequencial = busca_sequencia(tamanho, vet, valor_busca);
  if(resultado_sequencial != -1) {
    printf("Valor %d encontrado na busca sequencial no índice %d.\n", valor_busca, resultado_sequencial);
  } else {
    printf("Valor %d não encontrado na busca sequencial.\n", valor_busca);
  }

  // Exemplo de busca binária (precisa ordenar primeiro)
  ordena_vetor(vet, tamanho);
  int resultado_binario = busca_binaria(tamanho, vet, valor_busca);
  if(resultado_binario != -1) {
    printf("Valor %d encontrado na busca binária no índice %d (vetor ordenado).\n", valor_busca, resultado_binario);
  } else {
    printf("Valor %d não encontrado na busca binária (vetor ordenado).\n", valor_busca);
  }

  // Outra implementação de busca binária para exemplo
  int posicao_binaria = buscaBinaria(vet, tamanho, valor_busca);
  if (posicao_binaria != -1) {
    printf("O valor %d foi encontrado na posição %d na segunda implementação da busca binária.\n", valor_busca, posicao_binaria);
  } else {
    printf("O valor %d não foi encontrado na segunda implementação da busca binária.\n", valor_busca);
  }

  return 0;
}
