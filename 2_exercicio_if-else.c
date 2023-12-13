/*
Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e	escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano	
(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).
*/

#include <stdio.h>
#define IDADE_MINIMA 16
#define ANO_ATUAL 2023

int main(void) {
int anoNascimento, idadeAproximada;
    printf("Digite o seu ano de nascimento: \n");
    scanf("%d", &anoNascimento);
  idadeAproximada = ANO_ATUAL - anoNascimento;
    
if(idadeAproximada >= IDADE_MINIMA){
  printf("Você pode votar!");
  }else{
    printf("Você ainda não pode votar!");
    }
  
  return 0;
}
