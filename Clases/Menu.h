#ifndef MENU
#define MENU

#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "ManejadorQuierys.h"
#include "../Graphs/creadorArchivos.h"
#include "../Graphs/CreaGraficador.h"
#include "Tabla.h"
#include <string> 
#include <cstdlib>
#include <vector>
#include "../Arboles/Arreglo.h"
using namespace std;
class Tabla;
class CreaGraficador;
class CreadorArchivos;
class CreaArchivos;


class Menu{
    CreadorArchivos creadorArchivo = CreadorArchivos();
    CreaGraficador graficaaTabla = CreaGraficador();
    public:
        void MenuPrincipal();
        void MenuOpciones();
        void MenuQuerys();
        void MenuReportes();
        void MenuGraficas();
        vector<string> split(string str, char pattern);
        bool validarCreate(vector<string> input);
        ManejadorQuerys manejador;
    private:
    int opcion;
};

#endif