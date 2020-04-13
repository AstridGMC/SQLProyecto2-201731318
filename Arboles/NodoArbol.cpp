#include "NodoArbol.h"

NodoArbol* NodoArbol:: crearNodo(float miDato, int miIdNodo){
    NodoArbol *nuevoNodo = new  NodoArbol();
    nuevoNodo->dato = miDato;
    nuevoNodo-> derecho = NULL;
    nuevoNodo-> izquierdo = NULL;
    nuevoNodo->idNodo = miIdNodo;
}
