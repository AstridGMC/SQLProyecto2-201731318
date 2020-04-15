#include "NodoArbol.h"


NodoArbol* NodoArbol:: crearNodo(float miDato, int miIdNodo, int altura ){
    NodoArbol *nuevoNodo = new  NodoArbol();
    nuevoNodo->dato = miDato;
    nuevoNodo-> derecho = NULL;
    nuevoNodo-> izquierdo = NULL;
    nuevoNodo->idNodo = miIdNodo;
    nuevoNodo->altura = altura;
}
