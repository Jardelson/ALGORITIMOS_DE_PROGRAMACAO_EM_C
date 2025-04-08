#ifndef MAZE_STACK_H
#define MAZE_STACK_H

// Definição da estrutura para um nó da pilha
typedef struct Node {
    mark_t data;  // Dados a serem armazenados no nó
    struct Node* next;  // Ponteiro para o próximo nó na pilha
} Node;

// Definição da estrutura para a pilha
typedef struct Stack {
    Node* top;  // Ponteiro para o topo da pilha
} Stack;

// Protótipos das funções para manipular a pilha
Stack* createStack();  // Função para criar uma nova pilha
void push(Stack* stack, mark_t data);  // Função para adicionar um elemento à pilha
mark_t pop(Stack* stack);  // Função para remover e retornar o elemento do topo da pilha
int isEmpty(Stack* stack);  // Função para verificar se a pilha está vazia

#endif  // MAZE_STACK_H
