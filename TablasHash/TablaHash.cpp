#include "TablaHash.h"
#include "../Arboles/Nodo.h"
#include "../Arboles/Arbol.h"

#include <string> 
#include <cstdlib>
#include <vector>
#include "../Arboles/Arreglo.h"

using namespace std;

class Arreglo;
class Nodo;
class Arbol;

void TablaHash:: setTipo(string miTipo){
      tipo = miTipo;
}

TablaHash TablaHash :: crearTablaHash(string miNombre, string tip){
    TablaHash tabla  ;
    tabla.nombre = miNombre;
    tabla.tipo = tip;
    arregloHash =  Arreglo();
    Nodo* frente = NULL;
    Nodo* fin = NULL;
    for(int i=0; i<tamTabla;i++){
        Arbol arbol = Arbol();
        arregloHash.insertarArreglo(frente, fin, arbol);
    }
    return tabla;
}

TablaHash  TablaHash :: BuscarTablaHash(vector<TablaHash> tablas, string nombreTabla){
     TablaHash tablaEncontrada;
     for(int i = 0; i< tablas.size();i++){
        if (tablas.at(i).nombre == nombreTabla)
        {
           tablaEncontrada = tablas.at(i);
        }
     }
    return tablaEncontrada;
 }

int TablaHash :: CalcularNumeroDatos(TablaHash hash){
   int numeroDatos = 0;
      Nodo* nodo = hash.arregloHash.ObtenerPrimerNodo();
      for (int i = 0; i < hash.arregloHash.obtenerTam(); i++)
      {
         NodoArbol* raiz=  hash.arregloHash.obtenerNodoPorIndice(nodo , i)->dato.raiz;
         numeroDatos= numeroDatos + hash.arregloHash.obtenerNodoPorIndice(nodo , i)->dato.calcularNumeroDatos(0 , raiz );
      }
      return numeroDatos;
}
