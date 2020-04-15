#include "TablaHash.h"

void TablaHash:: setTipo(string miTipo){
      tipo = miTipo;
}

TablaHash :: TablaHash(){
    
}

TablaHash TablaHash :: crearTablaHash(string miNombre){
    nombre = miNombre;
    TablaHash tabla = TablaHash();
    arregloHash =  Arreglo();
    for(int i=0; i<tamTabla;i++){
        Nodo* frente = NULL;
        Nodo* fin = NULL;
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
