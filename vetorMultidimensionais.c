/* EXEPLO DE MATRIZ*/

#include <stdio.h>
#define LINHA 2
#define COLUNA 2

/* Início do corpo principal do programa */
int main() {
  int matriz[LINHA][COLUNA], i, j;
    for (i = 0; i < 3; i++) {
      for(j=0 ; j < 3; j++){
        printf("\nEntre com o elemento [%d][%d]",i,j);
        scanf("%d",&matriz[i][j]);
      }
    }

    for (i = 0; i < 3; i++) {
      for(j=0 ; j < 3; j++){
        if(i==j){
          printf("\n%d", matriz[i][j]);
        }
      }  
    } 
}
