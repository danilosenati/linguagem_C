void exibirPreOrdem(No **pRaiz) {
if((*pRaiz) != NULL) {
 printf(“%i\n”, (*pRaiz)->numero);
 exibirPreOrdem(&(*pRaiz)->esquerda);
 exibirPreOrdem(&(*pRaiz)->direita); }
}




void exibirPosOrdem(No **pRaiz) {
if((*pRaiz) != NULL) {
 exibirPosOrdem(&(*pRaiz)->esquerda);
 exibirPosOrdem(&(*pRaiz)->direita);
 printf(“%i\n”, (*pRaiz)->numero); }
