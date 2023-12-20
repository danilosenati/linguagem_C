/*
Trabalhando com FOR
*/

#include <stdio.h>
#include <stdlib.h>

//Ler 10 números e imprimir quantos são pares e quantos são ímpares.
int main(void) {
  int numero, totalPares = 0, totalImpares = 0;

  for (int i = 1; i <= 10; i++) {
    printf("Digite a %d° número: ", i);
    scanf("%d", &numero);
    if(numero % 2 == 0){
      totalPares = totalPares + 1;
    }else{
      totalImpares += 1;
    }
  }
  printf("\n");
  printf("Você digitou %d numeros pares  e %d numeros impares \n", totalPares, totalImpares);

  return 0;
}
