#ifndef ARBOL
#define ARBOL
#include<stdlib.h>
#include <iostream>
#include <algorithm>    // std::max
#include "NodoArbol.h"
using namespace std;

class Arbol{
    
    public:
    int altura =0 ;
    NodoArbol* raiz= NULL;
    float dato;
    void InsertarNodo( NodoArbol *&arbol, float dato, int idNodo);
    void Balancear(NodoArbol *t);
    void imprimirArbol(Arbol *arbol, int contador());
    int Altura(NodoArbol *t);
    void AlturaCalcular (NodoArbol* t);
    NodoArbol* rotacionizquierda(NodoArbol* t);
    NodoArbol* rotacionderecha(NodoArbol* t);
    NodoArbol* rotaciondobleizq(NodoArbol *c);
    NodoArbol* rotaciondobleder(NodoArbol *c);
    void  imprimirArbolInorden(NodoArbol *r);
    void imprimirArbolPreorden(NodoArbol *r);
    void imprimirArbolPostorden(NodoArbol *r);
    NodoArbol* obtenerRaiz();
    int calcularNumeroDatos(int contador, NodoArbol* raiz1);
};

#endif