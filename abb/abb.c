#include <stdio.h>
#include <stdlib.h>

#include "abb.h"

Abb crear_nodo(int valor) {
  Abb nodo = (Abb) malloc(sizeof(struct NODO));
  nodo->izq = NULL;
  nodo->der = NULL;
  nodo->valor = valor;
  return nodo;
}

void insertar_abb(Abb *raiz, int valor) {
  if(*raiz == NULL)
    *raiz = crear_nodo(valor);  
  else if(valor < (*raiz)->valor)
    insertar_abb(&(*raiz)->izq, valor);
  else
    insertar_abb(&(*raiz)->der, valor);
}

void liberar_arbol(Abb *raiz) {
  Abb p = *raiz;
  if(p != NULL) {
    liberar_arbol(&p->izq);
    liberar_arbol(&p->der);
    free(p);
  }
}

void imprimir_pre_orden(Abb arbol) {
  if(arbol != NULL) {
    printf("%d ", arbol->valor);
    imprimir_pre_orden(arbol->izq);
    imprimir_pre_orden(arbol->der);
  }
}

void imprimir_en_orden(Abb arbol) {
  if(arbol != NULL) {
    imprimir_en_orden(arbol->izq);
    printf("%d ", arbol->valor);
    imprimir_en_orden(arbol->der);
  }
}

void imprimir_post_orden(Abb arbol) {
  if(arbol != NULL) {
    imprimir_post_orden(arbol->izq);
    imprimir_post_orden(arbol->der);
    printf("%d ", arbol->valor);
  }
}

Abb nuevo_arbol() { return NULL; }