#include <stdio.h>

int main() {
    int num1, num2, quociente, resto;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calcula o quociente e o resto da divisão entre os números
    quociente = num1 / num2;
    resto = num1 % num2;

    // Imprime o quociente e o resto
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
