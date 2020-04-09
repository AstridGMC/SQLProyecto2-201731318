#include <cstddef>
#include <type_traits>
class NodoArbol{
    public:
    float dato;
    float idNodo;
    int altura;
    NodoArbol *derecho;
    NodoArbol *izquierdo;
    NodoArbol *crearNodo(float miDato);
   // void InsertarNodo(NodoArbol  *&miArbol, float dato);
};

NodoArbol* NodoArbol:: crearNodo(float miDato){
    NodoArbol *nuevoNodo = new  NodoArbol();
    nuevoNodo->dato = miDato;
    nuevoNodo-> derecho = NULL;
    nuevoNodo-> izquierdo = NULL;
}
