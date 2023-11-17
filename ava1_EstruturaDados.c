/* 
Trabalho da Disciplina Estrutura de Dados (IL10301) [AVA 1]
  LISTA ENCADEADA SIMPLES - EXERCICIO 2 
*/

// Autor: Danilo Barros

Update ava1_EstruturaDados.c

#include <locale.h>
#include <malloc.h>
#include <stdio.h>

// Declaração da estrutura Nodo
typedef struct sNodo {
  int info;
  struct sNodo *prox;
} Nodo;

// Declaração da estrutura Lista simples encadeada
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
  printf(" NULL \n");
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
  } else {
    printf("Lista vazia \n");
  }
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
    } else {
      pList->inicio = novo;
    }
  } else {
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
    if (pAtual != NULL) {
      pAnterior->prox = pAtual->prox;
      free(pAtual);
      printf("Elemento removido \n");
    } else {
      printf("Elemento não encontrado \n");
    }
  } else {
    printf("Lista vazia \n");
  }
}

// Remover todos os elementos da lista
void removerTodos(Lista *pList) {
  Nodo *pAuxiliar = pList->inicio;
  if (pAuxiliar != NULL) {
    while (pAuxiliar != NULL) {
      pList->inicio = pList->inicio->prox;
      free(pAuxiliar);
      pAuxiliar = pList->inicio;
    }
    printf("Elmentos removidos \n");
  } else {
    printf("Lista vazia \n");
  }
}

// Alterar elementos da lista
void alterarElemento(Lista *pList, int a1, int a2) {
  Nodo *pAtual, *pAnterior;
  pAnterior = NULL;
  pAtual = pList->inicio;

  while (pAtual != NULL && pAtual->info != a1) {
    pAnterior = pAtual;
    pAtual = pAtual->prox;
  }
  if (pAnterior != NULL) {
    if (pAtual != NULL) {
      pAtual->info = a2;
      printf("Elemento alterado \n");

    } else {
      printf("Elemento não encontrado \n");
    }
  } else {
    printf("Lista vazia \n");
  }
}

// Lista Vazia
int listaVazia(Lista *pList) { return (pList->inicio == NULL); }

/* Início do corpo principal do programa */
int main() {
  setlocale(LC_ALL, "Portuguese");

  Lista minhaLista;
  int opcao, valor, anterior;

  /* Cria a lista */
  criarLista(&minhaLista);
  do {
    printf("\n\nMenu de Opções\n\n");
    printf("1 - Inserir elemento no início da lista\n");
    printf(
        "2 - Inserir elemento em ordem (Verifique se a lista está ordenada)\n");
    printf("3 - Remover elemento do início da lista\n");
    printf("4 - Remover elemento de uma posição da lista\n");
    printf("5 - Imprimir lista\n");
    printf("6 - Apagar todos os elementos da lista\n");
    printf("7 - Alterar elemento da lista\n");
    printf("0 - Sair\n\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Digite o valor a ser inserido: ");
      scanf("%d", &valor);
      inserirInicio(&minhaLista, valor);
      break;

    case 2:
      printf("Digite o valor a ser inserido: ");
      scanf("%d", &valor);
      inserirOrdenado(&minhaLista, valor);
      break;

    case 3:
      removerInicio(&minhaLista);
      break;

    case 4:
      printf("Digite o valor a ser removido: ");
      scanf("%d", &valor);
      removerElemento(&minhaLista, valor);
      break;

    case 5:
      if (listaVazia(&minhaLista)) {
        printf("Lista vazia \n");

      } else {
        mostrarLista(&minhaLista);
      }
      break;

    case 6:
      removerTodos(&minhaLista);
      break;

    case 7:
      printf("Digite o valor a ser alterado: ");
      scanf("%d", &valor);
      printf("Digite o novo valor: ");
      scanf("%d", &anterior);
      alterarElemento(&minhaLista, valor, anterior);
      break;

    case 0:
      printf("Saindo...\n");
      removerTodos(&minhaLista);
      break;

    default:
      printf("Opção inválida! \n");
    }

  } while (opcao != 0);
}
