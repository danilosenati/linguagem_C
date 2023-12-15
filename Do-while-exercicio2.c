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
O programa deverá ler os votos dos eleitores e, quando for entrado o número 6, apresentar as seguintes
informações:
a) O número de votos de cada candidato;
b) A porcentagem de votos nulos;
c) A porcentagem de votos brancos;
d) O candidato vencedor. 
*/

#include <stdio.h>

int main(void) {
  int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, votosNulos = 0, votosBranco = 0, int totalEleitores;
  float porcentagemNulos, porcentagemBrancos;
  
 do{
   printf("*****_ELEIÇÕES NATAL 2023_*****\n\n");
   printf("Escolha seu candidato: \n\n 1. Candidato Jair Rodrigues \n 2. Candidato Carlos Luz\n 3. Candidato Neves Rocha\n 4. Nulo\n 5. Branco\n\n");

   printf("Entre com o seu voto: ");
   scanf("%d",&voto);

   // O número de votos de cada candidato;
   switch (voto){
     case 1:
       candidato1 =+1;
       break;

     case 2:
       candidato2 =+1;
       break;

     case 3:
       candidato3 =+1;
       break;

     case 4:
         votosNulos =+1;
       break;

     case 5:
         votosBranco =+1; 
       break;
   }

   // A porcentagem de votos nulos
   totalEleitores = (candidato1+candidato2+candidato3);
   porc
   
 }while(voto != 6);

  return 0;
}
