#include "Arreglo.h"
class Nodo;
Arreglo::  Arreglo(){

}

bool Arreglo:: ArregloVacio(Nodo *frente){
    return (frente == nullptr)? true : false;
} 

void Arreglo::insertarArreglo(Nodo *&frente, Nodo *&fin ,Arbol arbol){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = arbol;
    nuevoNodo->siguiente = nullptr;
    if(ArregloVacio(frente)){
        frente = nuevoNodo;
    }else{
        fin->siguiente = nuevoNodo;
    }
}

Arbol Arreglo :: ObtenerPrimero(){
    return frente->dato;
}

void Arreglo::sacarElementoCola(Nodo *&, Nodo *&, Arbol arbol){
    arbol = frente -> dato;
    Nodo *auxiliar = frente;
    if(frente == fin){
        frente == nullptr;
        fin = nullptr;
    }else{
        frente = frente->siguiente;
    }
    delete auxiliar;
}

int Arreglo:: obtenerTam(){
    int i = 0;
     while(frente != nullptr){
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


Arreglo::~Arreglo()
{
    while(frente != nullptr){
        sacarElementoCola(frente, fin, ObtenerPrimero());
    }
    delete frente;
    delete fin;
}
