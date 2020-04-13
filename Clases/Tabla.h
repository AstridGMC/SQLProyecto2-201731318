#ifndef TABLA
#define TABLA
#include <string>
#include <cstdlib>
#include <vector>
#include "../TablasHash/TablaHash.h"
#include "Columna.h"
using namespace std;
 
class Tabla{
    
    vector<Columna> columnas;
    //vector<TablaHash> tablasHash1;
    public:
    string nombre;
    vector<TablaHash> tablasHash;
    void  setNombre(string Nombre);
    void setColumnas(vector<Columna> columnas1);
    void ingresarCol(TablaHash miTabla);
    Tabla buscarTabla(vector<Tabla> tablasABuscar, string nombreTabla);
    string  getNombre();
    vector<Columna>  getColumnas();
    Tabla AgregarColumnas(vector<Columna> columnas, string nombreTabla);
};

#endif 