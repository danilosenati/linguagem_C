/* EXEPLO DE MATRIZ*/

#include <stdio.h>
#define LINHA 2
#define COLUNA 2

/* Início do corpo principal do programa */
int main() {
  int matriz[LINHA][COLUNA], i, j;
    for (i = 1; i < 3; i++) {
      for(j=1 ; j < 3; j++){
        printf("\nEntre com o elemento [%d][%d]",i,j);
        scanf("%d",&matriz[i][j]);
      }
    }

    for (i = 1; i < 3; i++) {
      for(j=1 ; j < 3; j++){
        if(i==j){
          printf("\n%d", matriz[i][j]);
/* Ao final do processamento serão exibidos todos os elementos que façam parte da diagonal principal.
          */
        }
      }  
    }
  
}
