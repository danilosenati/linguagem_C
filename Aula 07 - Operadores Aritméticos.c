#include <stdio.h>


// Aula 07 - Operadores Aritméticos

int main(void) {
  
  //SOMA
  int num1, num2 = 2, num3 = 3;
  float numero1, numero2 = 2.5, numero3 = 3.5;
  char letraA, letraB = '0', letraC = 'C'; // Soma o valor zerona tabela ASCII e somar com o valor C da tabela ASCII.
  
  // num1 = num2 + num3;
  // numero1 = numero2 + numero3;
  letraA = letraB + letraC;

  printf("num1 = %d\n", num1 = num2 + num3);
  printf("numeo1 = %.0f\n", numero1 = numero2 + numero3);
  printf("letraA = %c \n", letraA);
  
  return 0;
}
