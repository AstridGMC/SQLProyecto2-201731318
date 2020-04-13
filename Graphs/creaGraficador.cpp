#include "CreaGraficador.h"
#include <iostream>
#include <sstream>
#include <string>     // std::string, std::stof


string CreaGraficador :: crearContenidoPorTabla(Tabla tabla){

    string alinear = "node [shape=record,height=.1,heigt = .1,fontsize=11];\n rankdir = LR";
    contenidoArchivo = contenidoArchivo + alinear;
    for(int i=0 ;tabla.tablasHash.size;i++){
        alinear= alinear + crearHash(tabla.tablasHash);
    }
}

string CreaGraficador:: crearHash(std::vector<TablaHash> tablas){
    string tablaNodos="/n";
    tablaNodos = tablaNodos + "nodo() \n [label = \" ";
    for(int i=0 ; tablas.size(); i++){
        TablaHash tabla = tablas.at(i);
        Nodo* nodo =  tabla.arregloHash.ObtenerPrimero;
        for(int j=0; j= tabla.arregloHash.obtenerTam; j++){
            tablaNodos = tablaNodos + "< Nodo" +std::to_string(j) + " > |";
        }
    }
    tablaNodos = tablaNodos + " \" ].height = 2.5\n ] ;";

    return tablaNodos;
}

string CreaGraficador:: crearArboles(Arbol arbol){
    string datoArbol = "\n";
    datoArbol.push_back(arbol.dato);
    datoArbol= datoArbol + "\n";
    

}

string CreaGraficador:: ConvertToString (float number){
    ostringstream buff;
    buff<<number;
    return buff.str();
}