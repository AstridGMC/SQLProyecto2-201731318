#ifndef NODOARBOL
#define NODOARBOL
#include <cstddef>
#include <type_traits>

using namespace std;

class NodoArbol{
    public:
    float dato;
    int idNodo;
    int altura;
    NodoArbol *derecho;
    NodoArbol *izquierdo;
    NodoArbol *crearNodo(float miDato, int idNodo, int altura);
   // void InsertarNodo(NodoArbol  *&miArbol, float dato);
};
#endif 