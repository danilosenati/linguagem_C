/*
Trabalhando com FOR
*/

#include <stdio.h>
#include <stdlib.h>

// Fazer um programa para encontrar todos os números pares entre 1 e 100.
int main(void) {

int numero = 100;
  printf("Encontrando todos os números pares entre 1 e 100: \n\n");
  
  for(int i=1; i<= numero; i++){
    if(i % 2 == 0){
      printf("%d ",i);
    }   
  }

  return 0;
}
