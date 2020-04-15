#ifndef ARREGLO
#define ARREGLO
#include "Nodo.h"
using namespace std;
class Nodo;
class Arreglo {
    public:
        void insertarArreglo(Nodo *&, Nodo *&, Arbol arbol);
        bool ArregloVacio(Nodo *);
        void sacarElementoCola(Nodo *&, Nodo *&, Arbol arbol);
        Arbol ObtenerPrimero();
        int obtenerTam();
        Nodo* ObtenerPrimerNodo();
        Nodo* obtenerNodoPorIndice(Nodo *nodo,int indice);
        ~Arreglo();
    private:
        Nodo *frente;
        Nodo *fin;
};
#endif