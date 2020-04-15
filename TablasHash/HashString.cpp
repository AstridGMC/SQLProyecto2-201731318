#include "HashString.h"

int HashString ::  ElegirIndice(string dato){
    int indice = (StringToInt(dato))%(tamTabla);
    return indice;
}
void HashString:: Rehashing(){
    int carga = (datosAlmacenados / tamTabla)*100;
    if(carga>60){
        tamTabla = tamTabla+10;
    }
}

int HashString::  StringToInt(string dato){
    int valorAcci= 0;
    for(int i=0; i< dato.size(); i++){
        valorAcci = valorAcci + (int)dato.at(i);
    }
    return valorAcci;
}