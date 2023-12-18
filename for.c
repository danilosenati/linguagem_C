/*
Trabalhando com FOR
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2, num3;

  printf("Digite o 1º valor: \n");
  scanf("%d", &num1);
  printf("Digite o 2º valor: \n");
  scanf("%d", &num2);
  printf("\n");

  for (num3 = num1; num3 <= num2; num3++) {
    printf("%d, ",num3);
  }

  return 0;
}
