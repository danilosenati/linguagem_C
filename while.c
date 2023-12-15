/*
Estrutura de repetição while
*/

#include <stdio.h>

int main(void) {
  int num1, num2;
  
  printf("Digite o 1º valor inteiro: \n");
  scanf("%d", &num1);
  printf("Digite o 2º valor inteiro: \n");
  scanf("%d", &num2);
  
  while(num1 < num2){
    printf("%d é menor que %d \n",num1, num2);
    num1++;
  }
  printf("\n");
  printf("FIM DO PROGRAMA!");
  return 0;
}
