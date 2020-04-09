
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "Arbol.cpp"
using namespace std;
class Arbol;
class Cola{
    public:
        vector<Arbol> arboles;
        Cola();
        void insertarCola(Nodo *&, Nodo *&, float dato);
        bool colaVacia(Nodo *);
        void sacarElementoCola(Nodo *&, Nodo *&, float dato);
        float ObtenerPrimero();
        int obtenerTam();
        ~Cola();
    private:
        Nodo *frente;
        Nodo *fin;
};
class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    void setSiguiente(Nodo s);
    void setAnterior(Nodo a);
    static float dato;
    Nodo getSiguiente();
    Nodo getAnterior();
    Nodo *siguiente;
    Nodo *anterior;
    virtual ~Nodo();
};

Cola::  Cola(){

}

bool Cola:: colaVacia(Nodo *frente){
    return (frente == nullptr)? true : false;
} 

void Cola::insertarCola(Nodo *&frente, Nodo *&final,float dt){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = dt;
    nuevoNodo->siguiente = nullptr;
    if(colaVacia(frente)){
        frente = nuevoNodo;
    }else{
        fin->siguiente = nuevoNodo;
    }
}

float Cola :: ObtenerPrimero(){
    return frente->dato;
}

void Cola::sacarElementoCola(Nodo *&, Nodo *&, float dt){
    dt = frente -> dato;
    Nodo *auxiliar = frente;
    if(frente == fin){
        frente == nullptr;
        fin = nullptr;
    }else{
        frente = frente->siguiente;
    }
    delete auxiliar;
}
int Cola:: obtenerTam(){
    int i = 0;
     while(frente != nullptr){
        i++;
    }
    return i;
}

Cola::~Cola()
{
    while(frente != nullptr){
        sacarElementoCola(frente, fin, ObtenerPrimero());
    }
    delete frente;
    delete fin;
}


Nodo::Nodo()
{

}

Nodo::Nodo(const Nodo& orig)
{
}
/*
void Nodo::setSiguiente(Nodo s)
{
    siguiente = s;
}

void Nodo:: setAnterior(Nodo a)
{
    anterior = a;
}
*/
float Nodo :: dato;
Nodo::~Nodo()
{
}