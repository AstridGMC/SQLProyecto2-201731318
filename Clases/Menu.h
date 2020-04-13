#ifndef MENU
#define MENU

#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "ManejadorQuierys.h"


class Menu{
    public:
        Menu();
        Menu(const Menu& orig);
        void MenuPrincipal();
        void MenuOpciones();
        void MenuQuerys();
        void MenuReportes();
        void MenuGraficas();
        vector<string> split(string str, char pattern);
        bool validarCreate(vector<string> input);
        virtual ~Menu();
        ManejadorQuerys manejador = ManejadorQuerys();
    private:
    int opcion;
};

#endif