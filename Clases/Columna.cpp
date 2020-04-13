
#include "Columna.h"

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

