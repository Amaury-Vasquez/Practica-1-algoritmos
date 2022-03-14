struct NODO {
  int valor;
  struct NODO *izq;
  struct NODO *der;
};

typedef struct NODO* Abb;

// Funciones basicas ABB
Abb crear_nodo(int);
void insertar_abb(Abb *, int);
void liberar_arbol(Abb *);
void imprimir_pre_orden(Abb);
void imprimir_en_orden(Abb);
void imprimir_post_orden(Abb);
Abb nuevo_arbol();
// ****

// Funciones para uso en la practica
void guardar_arreglo(Abb, int *, int *);
Abb insertar_arreglo(int *, int);
Abb ordenar_abb(int *, int);
// **** 