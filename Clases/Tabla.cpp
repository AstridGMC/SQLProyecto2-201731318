#include "Tabla.h"

#include <string>
#include <vector>
#include <cstdlib>
#include <iostream> 
#include "../TablasHash/TablaHash.h"
#include "Columna.h"

using namespace std;
class TablaHash;
class Columna;

Tabla Tabla :: AgregarColumnas(vector<Columna> columnas1, string nombreTabla){
    Tabla tabla = Tabla();
    vector<TablaHash> tablasH;
    for(int i=0 ; i < columnas1.size(); i++){
        string nombre = columnas1.at(i).nombre;
        string tipo = columnas1.at(i).tipo;
        if(tipo == "string"|| tipo=="String"){
            //HashString hashString = hashString.crearTablaHash(nombre);
            TablaHash tablaHas = tablaHas.crearTablaHash(nombre);
            tablaHas.setTipo("string");
            tablasH.push_back(tablaHas);
        }else if (tipo == "integer"|| tipo=="Integer"|| tipo=="int" ){
            TablaHash tablaHas = tablaHas.crearTablaHash(nombre);
            tablaHas.setTipo("integer");
            //HashEntero hashEntero = hashEntero.crearTablaHash(nombre);
            tablasH.push_back(tablaHas);
        }else if(tipo == "char"|| tipo=="Char"){
            TablaHash tablaHas1 = TablaHash();
             tablaHas1 = tablaHas1.crearTablaHash(nombre);
            tablaHas1.setTipo("char");
            //HashChar hashChar =  HashChar();
            tablasH.push_back(tablaHas1);
        }else{
            TablaHash tablaHas1 = TablaHash();
            tablaHas1 = tablaHas1.crearTablaHash(nombre);
            tablaHas1.setTipo("float");
            //HashDecimales hashDecimales = hashDecimales.crearTablaHash(nombre);
            tablasH.push_back(tablaHas1);
        }
    }
    nombre = nombreTabla;
    columnas =columnas1;
    tablasHash.swap(tablasH);
    return tabla;
}


Tabla Tabla :: buscarTabla(vector<Tabla> tablasABuscar, string nombreTabla){
    Tabla tablaEncontrada;
    for(int i=0; tablasABuscar.size(); i++){
        if (tablasABuscar.at(i).nombre == nombreTabla)
        {
           tablaEncontrada = tablasABuscar.at(i);
        }
    }
    return tablaEncontrada;
}

int Tabla :: CantidadDatosTabla(vector<TablaHash> MisTablasHash){
    int cantidad=0;

    for (int i = 0; i < MisTablasHash.size(); i++)
    {
        TablaHash miTaba = MisTablasHash.at(i);
        cantidad = cantidad+ miTaba.CalcularNumeroDatos( miTaba);
    }
    
    return cantidad;
}

void Tabla :: setNombre(string Nombre){
     nombre = Nombre;
}
void Tabla ::  setColumnas(vector<Columna> columnas1){
    columnas = columnas1;
}

string Tabla :: getNombre(){
    return nombre;
}

vector<Columna>  Tabla:: getColumnas(){
    return columnas;
}


