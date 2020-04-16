#ifndef COLUMNA
#define COLUMNA
#include <string>
#include <vector>
#include <cstdlib>
#include <vector>
#include "../TablasHash/TablaHash.h"
using namespace std;
class TablaHash;

class Columna{
    
    public:
    string nombre="";
    string tipo="";
    Columna(string nombre, string tipo);
    Columna();
    int BuscarColumna(string nombreCol, vector<TablaHash> columnas);
    void setNombre(string nom);
    void setTipo( string tip);
};

#endif