#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminante, x1, x2;

    // Solicita ao usuário que insira os valores de a, b e c
    printf("Insira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    printf("Insira o valor de C: ");
    scanf("%f", &c);

    // Calcula o discriminante
    discriminante = b * b - 4 * a * c;

    // Verifica se a equação tem raízes reais
    if (discriminante > 0) {
        // Calcula as raízes
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    } else if (discriminante == 0) {
        // A equação tem apenas uma raiz real
        x1 = -b / (2 * a);
        printf("x1 = x2 = %f\n", x1);
    } else {
        // A equação não tem raízes reais
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}