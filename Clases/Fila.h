#ifndef FILA
#define FILA
#include <string>
#include "Tabla.h"
#include "../Arboles/Arbol.h"
#include "../TablasHash/HashChar.cpp"
#include "../TablasHash/HashEntero.cpp"
#include "../TablasHash/HashString.cpp"
#include "../TablasHash/HashDecimales.cpp"
using namespace std;

class  Fila {
private:
    /* data */
public:
    string nombre;
    string dato;
    string tipo;
    int identificador;
    void AgregarFilasTabla( vector<Fila> filas, NodoArbol *&, vector<Tabla> tablas, string nombre);
     Fila(/* args */);
    ~ Fila();
};
#endif 