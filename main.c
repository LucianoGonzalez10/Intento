#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

typedef struct {
   char patente[6];
   int valor;
   char marca[10];
} automovil;

typedef struct {
   automovil dato;
   struct nodo * siguiente;
} nodo;

int main()
{
    nodo * automoviles;
    automoviles = iniclista;
    return 0;
}

nodo * iniclista(){
    return NULL;
}

nodo * crearNodo (Persona dato){
     nodo * aux = (nodo*) malloc(sizeof(nodo));
     aux->dato = dato;
     aux->siguiente = NULL;
     return aux;
}

nodo * agregarFinal(nodo ** automoviles, nodo ** nuevo){
    if(automoviles == NULL){
        automoviles = nuevo;
    }
    else{
        nodo * ultimo = buscarUltimo(automoviles);
        ultimo->siguiente = nuevo;
    }
    return automoviles;
}

nodo * buscarUltimo(nodo * automoviles){
    nodo * seg = automoviles;
    while(automoviles->siguiente != NULL){
         seg = seg->siguiente;
    }
    return seg;
}
