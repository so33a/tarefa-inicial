#include <stdio.h>
#include <stdlib.h>
#include "listaDupla.h"


int main () {
  ListaDupla l = inicializa();
  link aux, aux2;
  insereDepois(l, l->head, aux= novoNo(12, NULL, NULL));
  aux2 = novoNo(21, NULL, NULL);
  insereDepois(l,aux,aux2);
  aux = novoNo(42, NULL, NULL); 
  insereDepois(l, aux2, aux);
  imprime(l);
  imprimeReverso(l);
  printf ("\nremovendo %d \n", aux2->item);
  if((aux2 = buscar(l, 21) ) != NULL) 
    removeNo(aux2);
  imprime(l);
  destroiLista(l);

  return 0;
}
