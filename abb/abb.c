#include <stdio.h>
#include <stdlib.h>

#include "abb.h"

// Funciones basicas ABB
Abb crear_nodo(int valor) {
  Abb nodo = (Abb) malloc(sizeof(struct NODO));
  nodo->izq = NULL;
  nodo->der = NULL;
  nodo->valor = valor;
  return nodo;
}

void insertar_abb(Abb *raiz, int valor) {
  Abb nodo = crear_nodo(valor);
  if(*raiz == NULL) 
    *raiz = nodo;
  else {
    Abb p = *raiz, q;
    while(p != NULL) {
      q = p;
      if(valor < p->valor)
        p = p->izq;
      else
        p = p->der;
    }
    if(valor < q->valor)
      q->izq = nodo;
    else
      q->der = nodo;
  }
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

// Funciones para uso en la practica

void guardar_arreglo(Abb arbol, int *arr, int *i) {
  if(arbol != NULL) {
    guardar_arreglo(arbol->izq, arr, i);
    arr[*i] = arbol->valor;
    (*i)++;
    guardar_arreglo(arbol->der, arr, i);
  }
}

Abb insertar_arreglo(int *arr, int len) {
  Abb arbol = nuevo_arbol();
  int i;
  for(i = 0; i < len; i++)
    insertar_abb(&arbol, arr[i]);
  return arbol;
}

// La funcion de ordenamiento regresa el arbol para 
// poder liberar memoria creada despues de ordenar el arreglo
Abb ordenar_abb(int *arr, int len) {
  Abb arbol = insertar_arreglo(arr, len);
  int i = 0;
  guardar_arreglo(arbol, arr, &i);
  return arbol;
}
