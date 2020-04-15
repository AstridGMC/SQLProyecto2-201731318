#include "HashChar.h"

int HashChar:: ElegirIndice(char input){
    float a = (float)input;
    //char b = (char)c;Rehashing
    int indice = ((int)a% tamTabla);
    return indice;
}

void HashChar:: Rehashing(){
    int carga = (datosAlmacenados / tamTabla)*100;
    if(carga>60){
        tamTabla = tamTabla+10;
    }
}
