/*
Trabalhando com FOR
*/

#include <stdio.h>
#include <stdlib.h>

//Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.
int main(void) {
  int numero, resultado;

  printf("TABUADA\n\n");
  printf("Digite um número entre 1 e 10: ");
  scanf("%d",&numero);
  if(numero < 1 || numero > 10){
    printf("%d não é um número valido!",numero);
  }else{
    for(int i = 1; i <=10; i++){
      resultado = numero * i;
      printf("%d x %d = %d\n",numero, i, resultado);
    }
  }
  


  return 0;
}
