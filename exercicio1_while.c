/*
Faça um programa que implemente um menu onde o usuário deverá selecionar 1 ou 0. Caso seja entrado um número diferente, o programa deverá solicitar uma nova opção
*/

#include <stdio.h>

int main(void) {
  int num1, contador = 0;
  
  printf("Digite 1 para entrar ou 0 para sair \n");
  printf("Número: ");
  scanf("%d", &num1);
  
  while(num1 != 1 && num1 !=0){
    contador +=1;
    printf("Opção invalida!\n");
    printf("Digite 1 para entrar ou 0 para sair \n");
    printf("Número: ");
    scanf("%d", &num1);
  }
  
  printf("\n");
  printf("Você digitou %d vezes o número incorretamente \n",contador);
  printf("FIM DO PROGRAMA!");
  return 0;
}
