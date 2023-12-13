/*
Elabore um algoritmo que leia dois valores do usuário e a operação que ele deseja executar (Operações: soma, subtração, divisão, multiplicação). Execute a operação desejada e imprima na tela..
*/

#include <stdio.h>

int main(void) {

  int valor1, valor2, operador, resultado;

  printf("Digite o 1º valor: ");
  scanf("%d",&valor1);
  printf("Digite o 2º valor: ");
  scanf("%d",&valor2);
  printf("\n");
  printf("Digite: 1 para soma, 2 para subtração, 3 para divisão, 4 para multiplicação: \n");
  printf("Operador: ");
  scanf("%d", &operador);
  
  switch(operador){
    case 1:
      resultado = valor1 + valor2;
      printf("%d + %d = %d", valor1, valor2, resultado);
      break;

    case 2:
      resultado = valor1 - valor2;
      printf("%d - %d = %d", valor1, valor2, resultado);
      break;

    case 3:
      resultado = valor1 / valor2;
      printf("%d / %d = %d", valor1, valor2, resultado);
      break;

    case 4:
      resultado = valor1 * valor2;
      printf("%d x %d = %d", valor1, valor2, resultado);
      break;

    default:
      printf("Operador digitado invalido!");
  }
  return 0;
}
