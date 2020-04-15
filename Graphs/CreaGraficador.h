#ifndef CREADORGREFICA
#define CREADORGREFICA

#include <string> 
#include <iostream>
#include <sstream>
#include <string>  

using namespace std;
#include "../Arboles/Arbol.h"
#include "../TablasHash/TablaHash.h"
#include "../Clases/Tabla.h"
class arbol;
class TablaHash;
class Tabla;

class CreaGraficador{
    
    string contenidoArchivo=" ";
    string crearArboles(Arbol arbol);
    string crearHash(std::vector<TablaHash> tablas);
    public:
    string crearContenidoPorTabla(Tabla tabla);
    string ConvertToString (float number);
};


#endif