// Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
#include <stdio.h>

int main() {
    float valor_compra, ano_fabricacao, ano_depreciacao;

    // Solicita ao usuário os valores de compra, ano de fabricação e ano de depreciação
    printf("Digite o valor de compra do veiculo: ");
    scanf("%f", &valor_compra);

    printf("Digite o ano de fabricacao do veiculo: ");
    scanf("%f", &ano_fabricacao);

    printf("Digite o ano de depreciacao do veiculo: ");
    scanf("%f", &ano_depreciacao);

    // Calcula o valor depreciado do veículo
    float valor_depreciado = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

    // Imprime o valor depreciado
    printf("O valor depreciado do veiculo e: R$%.2f\n", valor_depreciado);

    return 0;
}
