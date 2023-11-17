/* Você é programador da empresa Renalf Mega Data e seu gerente de projetos
de sistemas solicitou que você fizesse um programa de computador que implementasse um vetor de 50 posições para armazenamento de dados, fornecido
via teclado, para cada uma das seguintes variáveis: código, mercadoria, quantidade e preço unitário. Deve-se armazenar também o preço total, que deverá ser
calculado automaticamente pelo sistema (quantidade versus preço unitário).
No final do processamento, imprimir todos os códigos das mercadorias e seus
respectivos preços totais para todos os registros cuja quantidade seja igual ou
superior a 100 unidades.
*/

#include <malloc.h>
#include <stdio.h>

/* Início do corpo principal do programa */
int main() {
  int codigo[50], quantidade[50];
  char mercadoria[10][50];
  float preco_unitario[50], preco_total[50];
  int i, j;

  for(i=1; i<=50; i++){
    printf("Informe o código da mercadoria: ");
    scanf("%d", &codigo[i]);
    printf("Informe o nome da mercadoria: ");
    scanf("%s", mercadoria[i]);
    printf("Informe a quantidade da mercadoria: ");
    scanf("%d", &quantidade[i]);
    printf("Informe o preço unitário da mercadoria: ");
    scanf("%f", &preco_unitario[i]);
    printf("\n\n");

    preco_total[i] = quantidade[i] * preco_unitario[i];
  }
  // Saida de Informações
    for(j=1; j<=50; j++){
      if(quantidade[j] >= 100){
        printf("\n Código: %d, Preço Total: %.2f", codigo[j], preco_total[j]);
    }
   }
}
