#include "Fila.h"
#include <string>
#include "../TablasHash/TablaHash.h"
#include "Columna.h"
#include "../Arboles/Arbol.h"
#include "../Arboles/Nodo.h"
#include <vector>
#include "../TablasHash/HashChar.h"
#include "../TablasHash/HashEntero.h"
#include "../TablasHash/HashString.h"
#include "../TablasHash/HashDecimales.h"
#include "Tabla.h"
using namespace std;

class HashChar;
class HashEntero;
class HashString;
class HashDecimales;
class Arbol;
class TablaHash;
class Tabla;
class Nodo;

 Fila:: Fila(/* args */){
}

 Fila::~ Fila()
{
}


void Fila:: AgregarFilasTabla( vector<Fila> filas, NodoArbol *&arbolNodo, vector<Tabla> tablas, string nombre1){
    Tabla tabla = Tabla();
    tabla = tabla.buscarTabla(tablas, nombre1);
    vector<TablaHash> tablasHash = tabla.tablasHash;
    TablaHash tablaHas = TablaHash();
    Columna columna;
    for(int i=0; i< filas.size(); i++){
        string stringDato = filas.at(i).dato;
        TablaHash tablaHas = tabla.tablasHash.at(columna.BuscarColumna( filas.at(i).nombre , tabla.tablasHash ) );
        columna = tabla.getColumnas().at(columna.BuscarColumna( filas.at(i).nombre , tabla.tablasHash));
        if(columna.tipo=="string"){
            HashString hashString = HashString();
            string dato = stringDato;
            int indiceHash = hashString.ElegirIndice(dato);
            Nodo* nodo = tablaHas.arregloHash.ObtenerPrimerNodo();
            Arbol arbol = tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato;
            arbol.InsertarNodo(arbolNodo, std::stof(dato), filas.at(i).identificador);
            tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato = arbol;
        }else if(columna.tipo == "int"|| columna.tipo =="integer"){
            int dato = atoi(stringDato.c_str());
            HashEntero hasEntero = HashEntero();
            int indiceHash = hasEntero.ElegirIndice(dato);
            Nodo* nodo = tablaHas.arregloHash.ObtenerPrimerNodo();
            Arbol arbol = tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato;
            arbol.InsertarNodo(arbolNodo, (float)dato, filas.at(i).identificador);
            tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato = arbol;
        }else if(columna.tipo == "char"){
            char dato = stringDato.at(0);
            HashChar hashCHar = HashChar();
            int indiceHash = hashCHar.ElegirIndice(dato);
            Nodo* nodo = tablaHas.arregloHash.ObtenerPrimerNodo();
            Arbol arbol = tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato;
            arbol.InsertarNodo(arbolNodo, (float)dato, filas.at(i).identificador);
            tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato = arbol;
        }else{
            try {
                float dato= std::stof(stringDato);
                HashDecimales hasDecimales = HashDecimales();
                int indiceHash = hasDecimales.ElegirIndice(dato);
                Nodo* nodo = tablaHas.arregloHash.ObtenerPrimerNodo();
                Arbol arbol = tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato;
                arbol.InsertarNodo(arbolNodo,dato , filas.at(i).identificador);
                tablaHas.arregloHash.obtenerNodoPorIndice(nodo, indiceHash)->dato = arbol;
            } catch (...) {
                 float dato= 20.89;
            } 

        }
    }
}
