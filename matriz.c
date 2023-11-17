#include <stdio.h>

double vetorNotas[3];
double media;

/* Início do corpo principal do programa */
int main(void) {
  for (int i = 0; i < 3; i++) {
    printf("Digite a nota %d: ", i + 1);
    scanf("%lf", &vetorNotas[i]);
  }
}
