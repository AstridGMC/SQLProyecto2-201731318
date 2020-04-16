#include "Tabla.h"

#include <string>
#include <vector>
#include <cstdlib>
#include <iostream> 
#include "../TablasHash/TablaHash.h"
#include "Columna.h"
using namespace std;
class Columna;

vector<TablaHash> Tabla :: AgregarColumnas(vector<Columna> columnas1, string nombreTabla){
    Tabla tabla = Tabla();
    vector<TablaHash> tablasH;
    for(int i=0 ; i < columnas1.size(); i++){
        string nombre = columnas1.at(i).nombre;
        string tipo = columnas1.at(i).tipo;
        if(tipo == "string"|| tipo=="String"){
            //cout<< "string "<<nombre;
            //HashString hashString = hashString.crearTablaHash(nombre);
            TablaHash tablaHas1 = tablaHas1.crearTablaHash(nombre, "string");
            tablaHas1.nombre = nombre;
            tablasH.push_back(tablaHas1);
        }else if (tipo == "integer"|| tipo=="Integer"|| tipo=="int" ){
            //cout<< "int "<<nombre;
            TablaHash tablaHas2  = tablaHas2.crearTablaHash(nombre, "int");
            tablaHas2.nombre = nombre;
            tablasH.push_back(tablaHas2);
        }else if(tipo == "char"|| tipo=="Char"){
            //cout<< "char "<<nombre;
            TablaHash tablaHas1 = tablaHas1.crearTablaHash(nombre, "char");
            tablaHas1.nombre = nombre;
            tablasH.push_back(tablaHas1); 
        }else{
            //cout<< "float "<<nombre;
            TablaHash tablaHas1 = tablaHas1.crearTablaHash(nombre, "float");
            tablaHas1.nombre = nombre;
            tablasH.push_back(tablaHas1);
        }
    }
    tabla.setNombre(nombre);
    tabla.tablasHash = tablasH;
    tabla.setColumnas(columnas1 );
    return tablasH;
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


