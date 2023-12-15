/*
Faça um programa que simule a urna eletrônica.
A tela a ser apresentada deverá ser da seguinte forma:
As opcoes sao:
1. Candidato Jair Rodrigues
2. Candidato Carlos Luz
3. Candidato Neves Rocha
4. Nulo
5. Branco
Entre com o seu voto:
O programa deverá ler os votos dos eleitores e, quando for entrado o número 6,
apresentar as seguintes informações: a) O número de votos de cada candidato; b)
A porcentagem de votos nulos; c) A porcentagem de votos brancos; d) O candidato
vencedor.
*/

#include <stdio.h>

int main(void) {
  int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, votosNulos = 0,
            votosBranco = 0;
  int totalEleitores = 0;
  float porcentagemNulos, porcentagemBrancos;

  do {
   /* printf("*****_ELEIÇÕES NATAL 2023_*****\n\n");
    printf("Escolha seu candidato: \n\n 1. Candidato Jair Rodrigues \n 2. "
           "Candidato Carlos Luz\n 3. Candidato Neves Rocha\n 4. Nulo\n 5. "
           "Branco\n\n"); */

    printf("Entre com o seu voto: ");
    scanf("%d", &voto);

    // O número de votos de cada candidato;
   // O número de votos de cada candidato;
     switch (voto){
       case 1:
         candidato1 +=1;
         break;

       case 2:
         candidato2 +=1;
         break;

       case 3:
         candidato3 +=1;
         break;

       case 4:
           votosNulos +=1;
         break;

       case 5:
           votosBranco +=1; 
         break;
     }

  } while (voto != 6);
  printf("Total de votos do candidato 1: %d\n\n", candidato1);
  printf("Total de votos do candidato 2: %d\n\n", candidato2);
  printf("Total de votos do candidato 3: %d\n\n", candidato3);

  // A porcentagem de votos nulos
  totalEleitores = (candidato1 + candidato2 + candidato3);
   // printf("TOTAL ELEITORES: %d",totalEleitores);
  porcentagemNulos = (votosNulos*100) / totalEleitores;
  printf("porcentagem de votos nulos: %.1f\n", porcentagemNulos);

  // A porcentagem de votos brancos;
  porcentagemBrancos = (votosBranco*100) / totalEleitores;
  printf("porcentagem de votos em branco: %.1f\n", porcentagemBrancos);

  // O candidato vencedor
  if(candidato1 > candidato2 && candidato1 > candidato3){
    printf("Candidato: Jair Rodrigues foi o vencedor com %d votos\n",candidato1);
  }else if (candidato2 > candidato3){
    printf("Candidato: Carlos Luz foi o vencedor com %d votos\n",candidato2);
  }else{
     printf("Candidato: Neves Rocha foi o vencedor com %d votos\n",candidato3);
  }
  
  return 0;
}
