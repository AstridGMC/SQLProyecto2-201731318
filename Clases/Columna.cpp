#include "Columna.h"
#include "../TablasHash/TablaHash.h"
#include <string>
#include <vector>
using namespace std;
class TablaHash;

Columna:: Columna(string nom, string tip){
    nombre = nom;
    tipo = tip;
}

Columna:: Columna(){
}

int Columna:: BuscarColumna(string nombreCol, vector<TablaHash> columnas){
    int numColumna;
    for(int i=0; i< columnas.size(); i++){
        if(columnas.at(i).nombre == nombreCol){
            numColumna = i;
        }else{
            numColumna = -1;
        }
    }
    return numColumna;
}


void Columna:: setNombre(string nom){
    nombre = nom;
}

void Columna:: setTipo( string tip){
    tipo = tip;
}
