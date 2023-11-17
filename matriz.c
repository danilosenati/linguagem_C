#include <stdio.h>

float vetorNotas[3];
float media;
int i;

/* Início do corpo principal do programa */
int main() {
  for (i = 0; i < 3; i++) {
    printf("Digite a %dº nota : \n", i + 1);
    scanf("%f", &vetorNotas[i]);
    media += vetorNotas[i];
  }
  media = media / 3;
  printf("A média é: %.2f \n", media);

}
