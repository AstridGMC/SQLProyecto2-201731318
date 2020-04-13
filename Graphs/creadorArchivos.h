#include <iostream>  
#include <string.h>
#include <fstream>
using namespace std;

class CreadorArchivos{
    public:
    string path;
    string EscribirArchivo(string archivo);
    void generarImagen(string archivo);
};