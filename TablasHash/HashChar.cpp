#include <string>
#include "TablaHash.h"

class HashChar : public TablaHash {
    int tamTabla = 15;
    int datosAlmacenados;
    void Rehashing();
    public:
    int ElegirIndice(char input);
    HashChar crearTablaHash(string miNombre);
};


int HashChar:: ElegirIndice(char input){
    float a = (float)input;
    //char b = (char)c;
    int indice = ((int)a% tamTabla);
    return indice;
}

HashChar HashChar :: crearTablaHash(string miNombre){
    nombre = miNombre;
    HashChar tabla = HashChar();
    //arregloHash =  Arreglo();
    for(int i=0; i<tamTabla;i++){
        Nodo* frente = NULL;
        Nodo* fin = NULL;
        Arbol arbol = Arbol();
       // arregloHash.insertarArreglo(frente, fin, arbol);
    }
    
    return tabla;
}


void HashChar:: Rehashing(){
    int carga = (datosAlmacenados / tamTabla)*100;
    if(carga>60){
        tamTabla = tamTabla+10;
    }
}
