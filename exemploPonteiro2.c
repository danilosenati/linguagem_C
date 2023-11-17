// %x MOSTRA CARACTER HEXADECIMAL

/* ALOCAÇÃO DE MEMORIA DINAMICA*/

#include <stdio.h>
#include <malloc.h>

/* Início do corpo principal do programa */
int main() {
  // Declaração do ponteiro
  int *ptr;

  int numero = 17;

  // Atribuição do endereço da variavel numero ao ponteiro ptr
  ptr = &numero;
  printf("Utilizando Ponteiros\n\n");
  printf("Conteudo da variavel numero: %d\n", numero);
  printf("Endereço da variavel numero: %x\n",numero);
  printf("Conteudo da variavel ponteiro ptr: %x\n", ptr);

  system("PAUSE");
  return 0;
}
