#ifndef TABLA
#define TABLA

#include <string>
#include <vector>
#include "Columna.h"
#include <cstdlib>
#include <iostream> 
#include "../Clases/Columna.h"
#include "../TablasHash/TablaHash.h"
using namespace std;

class Columna;

class Tabla{
    public:
    vector<Columna> columnas;
    string nombre;
    vector<TablaHash> tablasHash;
    void  setNombre(string Nombre);
    void setColumnas(vector<Columna> columnas1);
    void ingresarCol(TablaHash miTabla);
    Tabla buscarTabla(vector<Tabla> tablasABuscar, string nombreTabla);
    int CantidadDatosTabla(vector<TablaHash> MisTablasHash);
    string  getNombre();
    vector<Columna>  getColumnas();
    vector<TablaHash> AgregarColumnas(vector<Columna> columnas, string nombreTabla);
};

#endif 

