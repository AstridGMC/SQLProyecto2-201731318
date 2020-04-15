#ifndef CREADORARCHIVOS
#define CREADORARCHIVOS

#include <iostream>  
#include <string.h>
#include <fstream>
#include <cstdlib>
using namespace std;

class CreadorArchivos{
    public:
    string path;
    string EscribirArchivo(string archivo);
    void generarImagen(string archivo);
};

#endif