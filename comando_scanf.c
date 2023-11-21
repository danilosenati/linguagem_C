#include <stdio.h> // Escrita e leitura
#include <stdlib.h> // Biblioteca auxiliar.

// Aula 04 - Comando scanf

int main(void) {
  char letra;
  int numero;
  float real;
  double real2;

    printf("Digite uma letra: \n");
    scanf("%c",&letra);
    printf("Digite um numero: \n");
    scanf("%d",&numero);
    printf("Digite um número com ponto flutuante: \n");
    scanf("%f",&real);
    printf("Digite outro número com ponto flutuante: \n");
    scanf("%lf",&real2);

    printf("Palavra digitada: %c, numero: %d, ponto flutuante: %.2f, segundo numero com ponto flutuante: %.2f", letra, numero, real, real2);

  return 0;
}
