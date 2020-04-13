#ifndef NODO
#define NODO

#include "Arbol.h"

class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    void setSiguiente(Nodo s);
    void setAnterior(Nodo a);
    Arbol dato;
    Nodo getSiguiente();
    Nodo getAnterior();
    Nodo *siguiente;
    Nodo *anterior;
    virtual ~Nodo();
};
#endif