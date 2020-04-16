#ifndef TABLAHASH
#define TABLAHASH

#include <string> 
#include <cstdlib>
#include <vector>
#include "../Arboles/Arreglo.h"
#include "../Arboles/Nodo.h"
#include "../Arboles/Arbol.h"
using namespace std;

class Arreglo;

class TablaHash{
   public:
   Arreglo arregloHash;
   int tamTabla =20;
   string tipo;
   string nombre;
   TablaHash BuscarTablaHash(vector<TablaHash>, string tabla);
   TablaHash crearTablaHash(string miNombre, string tip);
   void setArreglo(Arreglo arreglo);
   void setTipo(string tipo);
   int CalcularNumeroDatos(TablaHash hash);
   //TablaHash();
};

#endif