/* ALOCAÇÃO DE MEMORIA DINAMICA*/

#include <stdio.h>
#include <malloc.h>

/* Início do corpo principal do programa */
int main() {
  // Declaração do ponteiro
  int *ptr;

  ptr =(int*) malloc(sizeof(int));
  *ptr = 3;
  system("CLS");
  printf("Conteudo do ponteiro: %d \n\n",*ptr);
  system("PAUSE");   
}
