#include "Tabla.h"
#include "../TablasHash/TablaHash.h"

Tabla Tabla:: AgregarColumnas(vector<Columna> columnas1, string nombreTabla){
    Tabla tabla = Tabla();
    vector<TablaHash> tablasH;
    for(int i=0 ; i < columnas.size(); i++){
        string nombre = columnas.at(i).nombre;
        string tipo = columnas.at(i).tipo;
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
            TablaHash tablaHas = tablaHas.crearTablaHash(nombre);
            tablaHas.setTipo("char");
            //HashChar hashChar =  HashChar();
            tablasH.push_back(tablaHas);
        }else{
            TablaHash tablaHas = tablaHas.crearTablaHash(nombre);
            tablaHas.setTipo("float");
            //HashDecimales hashDecimales = hashDecimales.crearTablaHash(nombre);
            tablasH.push_back(tablaHas);
        }
    }
    nombre = nombreTabla;
    columnas =columnas1;
    tablasHash.swap(tablasH);
    return tabla;
}


Tabla Tabla:: buscarTabla(vector<Tabla> tablasABuscar, string nombreTabla){
    Tabla tablaEncontrada;
    for(int i=0; tablasABuscar.size(); i++){
        if (tablasABuscar.at(i).nombre == nombreTabla)
        {
           tablaEncontrada = tablasABuscar.at(i);
        }
    }
    return tablaEncontrada;
}

int CantidadDatosTabla(vector<TablaHash> MisTablasHash){
    int cantidad;

    for (int i = 0; i < MisTablasHash.size(); i++)
    {
        TablaHash miTaba = MisTablasHash.at(i);
        cantidad = cantidad+ miTaba.CalcularNumeroDatos( miTaba);
    }
    
    return cantidad;
}

void Tabla:: setNombre(string Nombre){
     nombre = Nombre;
}
void Tabla::  setColumnas(vector<Columna> columnas1){
    columnas = columnas1;
}

string Tabla:: getNombre(){
    return nombre;
}

vector<Columna>  Tabla:: getColumnas(){
    return columnas;
}


