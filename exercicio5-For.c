/*
Trabalhando com FOR
*/

#include <stdio.h>
#include <stdlib.h>

// Leia várias idades e calcule a média entre as idades (usar uma variável para
// idade).
int main(void) {
  int quantIdades, idade, totalIdades = 0;
  float mediaIdades;

  printf("Quantas vezes o programa deve pedir a idade?:");
  scanf("%d", &quantIdades);
  printf("\n");
  for (int i = 1; i <= quantIdades; i++) {
    printf("Digite a %d° idade: ", i);
    scanf("%d", &idade);
    totalIdades += idade;
  }
  mediaIdades = totalIdades / quantIdades;
  printf("\n");
  printf("A média entre as idades é: %.1f", mediaIdades);

  return 0;
}
