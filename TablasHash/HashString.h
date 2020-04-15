#ifndef HASHSTRING
#define HASHSTRING

#include <iostream>
#include <string>
using namespace std;

class HashString{ 
    int indiceIngreso;
    int tamTabla =  20;
    int datosAlmacenados;
    public:
    int ElegirIndice(string dato );
    void Rehashing();
    int StringToInt(string dato);
    HashString crearTablaHash(string miNombre);
};


#endif