#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com primerio número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos numeros é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos numeros é %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / (numero2 * 1.0f); // conversão implicita, está jogando 4byte para 4bytes. Se fosse char (1byte) seria 1byte para 4byte.
  printf("A divisão dos numeros é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisão é %i\n", resto);
  
  // numero1 = numero1 + 1;
  // incremento
  printf("O incremento do primeiro numero é %i\n", numero1++);
  printf("O incremento do primeiro numero é %i\n", ++numero1);
  
  // numero1 = numero1 - 1;
  // decremento
  printf("O decremento do primeiro numero é %i\n", numero1--);
  printf("O decremento do primeiro numero é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4); // numero1^4
  printf("A quarta potencia do primeiro numero é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo na base 2 do primeiro numero é %f\n", logaritmo2);

  const double PI = 3.14159265358979323846;
  double seno = sin(numero1 * (PI / 180.0)); //angulo de radiano * PI / 180
  printf("O seno do primerio numero é %f\n", seno); 

  
return 0;
}