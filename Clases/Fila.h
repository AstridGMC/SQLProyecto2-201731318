#ifndef FILA
#define FILA

#include "../Arboles/NodoArbol.h"
#include "Tabla.h"
#include "../TablasHash/HashChar.h"
#include "../TablasHash/HashEntero.h"
#include "../TablasHash/HashString.h"
#include "../TablasHash/HashDecimales.h"
#include <string> 
#include <vector>
using namespace std;

class NodoArbol;
class HashChar;
class HashEntero;
class HashString;
class HashDecimales;
class Tabla;

class  Fila {
public:
   
    int identificador;
    void AgregarFilasTabla( vector<Fila> filas, NodoArbol *&, vector<Tabla> tablas, string nombre);
    string nombre;
    string dato;
    string tipo;
     Fila( );
    ~ Fila();
};
#endif 