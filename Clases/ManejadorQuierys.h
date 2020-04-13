#ifndef MANEJADORQUERYS
#define MANEJADORQUERYS
#include <vector>
#include <string>
#include <iostream>
#include "Fila.h"
#include "Tabla.h"
#include <cstdlib>
using namespace std;

class ManejadorQuerys{
    public:
    NodoArbol *nodo = NULL;
    int contador = 0;
    vector<Tabla> tablas;
    string crearTabla(vector<string> milista);
    string seleccionarNombreTabla(vector<string> milista);
    vector<Columna> seleccionarColumnasTabla(vector<string> milista);
    vector<Fila> seleccionarFilasTabla(vector<string> milista, vector<string> milista2);
    vector<Fila> separarColumnasAInsertar(vector<string> milista);
    bool AgregarColumnas(vector<string>);
    void InsertarFilas(vector<string> );
    void ListarTablas();
    vector<string>  split(string str, char pattern);
};
#endif