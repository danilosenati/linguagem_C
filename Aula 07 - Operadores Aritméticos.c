#include <stdio.h>

// Aula 07 - Operadores Aritméticos

int main(void) {

  // SOMA
  printf("####_SOMA_####\n");

  int num1, num2 = 2, num3 = 3;
  float numero1, numero2 = 2.5, numero3 = 3.5;
  char letraA, letraB = '0',
               letraC = 'C'; // Soma o valor zerona tabela ASCII e somar com o
                             // valor C da tabela ASCII.

  // num1 = num2 + num3;
  // numero1 = numero2 + numero3;
  letraA = letraB + letraC;

  printf("num1 = %d\n", num1 = num2 + num3);
  printf("numero1 = %.0f\n", numero1 = numero2 + numero3);
  printf("letraA = %c \n\n", letraA);

  // SUBTRAÇÃO
  printf("####_SUBTRAÇÃO_####\n");
  int valor1, valor2 = 5, valor3 = 3;
  float valor4, valor5 = 2.5;

  valor1 = valor2 - valor3;
  valor4 = -valor5;

  printf("%d - %d : %d\n", valor2, valor3, valor1);
  printf("valor4 = %.1f\n\n", valor4);

  // MULTIPLICAÇÃO
  printf("####_MULTIPLICAÇÃO_####\n");
  int x1, x2 = 9, x3 = 7;
  double x4 = 7.4, x5 = 2;

  x1 = x2 * x3;
  double resultado = x4 * x5;

  printf("%d x %d : %d\n", x2, x3, x1);
  printf("%.1f x %.0f : %.2f\n\n", x4, x5, resultado);

  // DIVISÃO
  printf("####_DIVISÃO_####\n");
  int y2 = 10, y3;
  float y4, y5;

  // DIVISÃO COM NUMEROS INTEIROS
  y3 = y2 / 2;
  printf("y3 = %d\n", y3);

  // DIVISÃO COM NUMEROS COM PONTO FLUTUANTE
  y4 = y2 / 2;
  printf("y4 = %f\n", y4);

  y5 = y2 / 2.0;
  printf("y5 = %.f\n\n", y5);

  // PRECEDÊNCIA DE OPERADORES
  printf("####_PRECEDÊNCIA_####\n");
  float number1, number2 = 6.2;
  number1 = number2 + 11 / 2.0;  //number1 = number4 + (11 / 2.0)
  printf("number1 = %.1f \n",number1);

  number1 = (number2 + 15) / 3.5;
  printf("number1 = %.2f \n\n",number1);

  // RESTO DA DIVISÃO
  printf("####_RESTO_DA_DIVISÃO_####\n");
  int number3 = 11, number4;
  number4 = number3 % 2;
  printf("number4 = %d\n", number4);

  number4 = number3 % 0;
  printf("number4 = %d\n", number4);
  
  return 0;
}
