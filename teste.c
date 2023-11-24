void exibirPosOrdem(No **pRaiz) {
if((*pRaiz) != NULL) {
 exibirPosOrdem(&(*pRaiz)->esquerda);
 exibirPosOrdem(&(*pRaiz)->direita);
 printf(“%i\n”, (*pRaiz)->numero); }
