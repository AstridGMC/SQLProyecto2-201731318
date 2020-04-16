#include "Arreglo.h"

#include "Nodo.h"
#include "Arbol.h"

class Nodo;
class Arbol;


bool Arreglo:: ArregloVacio(Nodo *frente){
    return (frente == NULL)? true : false;
} 

void Arreglo:: insertarArreglo(Nodo *&frente1, Nodo *&fin1 ,Arbol arbol){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = arbol;
    nuevoNodo->siguiente = NULL;
    if(ArregloVacio(frente1)){
        frente1 = nuevoNodo ;
    }else{
        fin1->siguiente = nuevoNodo;
    }
    fin1 = nuevoNodo;
}

Arbol Arreglo :: ObtenerPrimero(){
    return frente->dato;
}

Nodo* Arreglo :: ObtenerPrimerNodo(){
    return frente;
}

void Arreglo::sacarElementoCola(Nodo *&, Nodo *&, Arbol arbol){
    arbol = frente -> dato;
    Nodo *auxiliar = frente;
    if(frente == fin){
        frente == NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;
    }
    delete auxiliar;
}

int Arreglo:: obtenerTam(){
    int i = 0;
     while(frente != NULL){
        i++;
    }
    return i;
}

Nodo* Arreglo:: obtenerNodoPorIndice(Nodo *head, int i) {
    Nodo *nodo = head;

    int x;

    for(x = 0; x < i; x++) {
        nodo = nodo->siguiente;
    }
    return nodo;
    //current->data = new_data;
}

