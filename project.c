/*LISTA ENCADEADA SIMPLES - EXERCICIO 2
 */

#include <locale.h>
#include <malloc.h>
#include <stdio.h>

// Declaraão da estrutura Nodo
typedef struct sNodo {
  int info;
  struct sNodo *prox;
} Nodo;

// Declaraão da estrutura Lista simples encadeada
typedef struct sLista {
  Nodo *inicio;
} Lista;

// Criar lista vazia
void criarLista(Lista *pList) { pList->inicio = NULL; }

// Mostrando elementos da lista
void mostrarLista(Lista *pList) {
  Nodo *p;
  printf("Lista");

  for (p = pList->inicio; p != NULL; p = p->prox) {
    printf(" -> %d", p->info);
  }
  printf("NULL \n");
}

// Inserir elemento no inicio da lista
void inserirInicio(Lista *pList, int a) {
  Nodo *novo;
  novo = (Nodo *)malloc(sizeof(Nodo));
  if (novo != NULL) {
    novo->info = a;
    novo->prox = pList->inicio;
    pList->inicio = novo;
  } else {
    printf("Memória insuficiente \n");
  }
}

// Remover no inicio da lista
void removerInicio(Lista *pList) {
  Nodo *pAuxiliar = pList->inicio;
  if (pAuxiliar != NULL) {
    pList->inicio = pList->inicio->prox;
    free(pAuxiliar);
    printf("Elemento removido \n");
  }else{
    printf("Lista vazia \n");
  }

// Inserir elementos em ordem na lista
void inserirOrdenado(Lista *pList, int a) {
  Nodo *novo;
  novo = (Nodo *)malloc(sizeof(Nodo));
  if (novo != NULL) {
    novo->info = a;
    
    Nodo *pAtual, *pAnterior;
    pAnterior = NULL;
    pAtual = pList->inicio;
    
    while (pAtual != NULL && pAtual->info < a) {
      pAnterior = pAtual;
      pAtual = pAtual->prox;
    }
    novo->prox = pAtual;
    
    if (pAnterior == NULL) {
      pAnterior->prox = novo;
    }else{
      pList->inicio = novo;
    }
  }else{
    printf("Memória insuficiente \n");
  }
}

  // Remover elemento especifico da lista
  void removerElemento(Lista *pList, int a) {
    Nodo *pAtual, *pAnterior;
    pAnterior = NULL;
    pAtual = pList->inicio;
    
    while (pAtual != NULL && pAtual->info != a) {
      pAnterior = pAtual;
      pAtual = pAtual->prox;
    }
    if (pAnterior != NULL) {
      if(pAtual != NULL){
        pAnterior->prox = pAtual->prox;
        free(pAtual);
        printf("Elemento removido \n");
      }else{
        printf("Elemento não encontrado \n"); 
        }
    }
    else{
      printf("Lista vazia \n");
    }

  // Remover todos os elementos da lista
    void removerTodos(Lista *pList) {
      Nodo *pAuxiliar = pList->inicio;
      if(pAuxiliar != NULL){
        while(pAuxiliar != NULL){
          pList->inicio = pAuxiliar->prox;
          free(pAuxiliar);
          pAuxiliar = pList->inicio;
        }
        printf("Elementos Removidos\n");
        }
      else{
        printf("Lista vazia\n");
      }
    }  
    

    
  }
  
  
  
/* Início do corpo principal do programa */
int main() {}
