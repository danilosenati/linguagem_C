
/*
EXERCICIOS RETIRADO DE:
  Curso de Graduação em Ciência da Computação
  Disciplina: Algoritmos
  Professor: Marcelo Cendron
  Disponivel em: https://professor.luzerna.ifc.edu.br/marcelo-cendron/wp-content/uploads/sites/40/2017/02/lista-exercicios-if-else.pdf
*/

/*
Escreva	 um	 programa	 para	 ler 2	 valores (considere	 que não	 serão	informados	valores	iguais)	e	escrever	o	maior	deles.
*/
#include <stdio.h>

int main(void) {
int valor1, valor2;
    printf("Digite o 1º valor: \n");
    scanf("%d", &valor1);
    printf("Digite o 2º valor: \n"); 
    scanf("%d", &valor2);

    if(valor1> valor2){
      printf("O maior valor é %d", valor1);
    }else{
      printf("O maior valor é %d", valor2);
    }
  return 0;
}
