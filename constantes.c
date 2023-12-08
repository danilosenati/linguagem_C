#include <stdio.h>

#define PI 3.1415 // Definição de constante.

// Aula 06 - Constantes

int main(void) {
// Outra forma de declarar constante
  const float PI2 = 3.1415;

// Declaração de variáveis
  float valor = (PI + PI2) + 1;

// Forma incorreta de declarar constante:
  PI =  3.1415;

// Imprimindo Saida de dados:
  printf("Valor do 1º PI: %f \n",PI);
   printf("Valor do 2º PI: %f \n",PI);
  printf("Soma de %f + %f  + 1 =  %f", PI, PI2, valor);
  return 0;
}
