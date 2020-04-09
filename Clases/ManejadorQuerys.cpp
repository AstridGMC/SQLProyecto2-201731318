#include "../TablasHash/TablaHash.cpp"
#include "Columna.cpp"
#include "Fila.cpp"
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class TablaHash;
class Fila;
class Columna;

class ManejadorQuerys{
    Columna columna ;
    Fila fila;
    vector<string> milista;
    vector<TablaHash> tablas;
    public:
   
    string seleccionarNombreTabla(vector<string> milista);
    
    vector<Columna> seleccionarColumnasTabla(vector<string> milista);
    vector<Fila> seleccionarFilasTabla(vector<string> milista);
};

string ManejadorQuerys:: seleccionarNombreTabla(vector<string> milista){
    string nombreTabla;
    if (milista.at(1)=="*"){
        return "*";
    }else{
        nombreTabla = milista.at(2);
        return nombreTabla;
    }
    
}

vector<Fila> ManejadorQuerys:: seleccionarFilasTabla(vector<string> milista){
    vector<Fila> filas;
    int i=4;
    while(milista.at(i).c_str() != (char*)")"){
        if(milista.at(i).c_str() == (char*)"," ){
        }else{
            fila = Fila();
            fila.nombre= milista.at(i);
            fila.dato = milista.at(i+1);
            filas.push_back(fila);
        }
    }
    return filas;
}