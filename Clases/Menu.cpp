#include "Menu.h"
#include <stdlib.h>
#include "../Clases/Tabla.h"
#include "ManejadorQuierys.h"
#include "../Graphs/creadorArchivos.h"
#include "../Graphs/CreaGraficador.h"
#include <string> 
#include <cstdlib>
#include <vector>
using namespace std;
 
class Tabla;
class CreaGraficador;
class CreadorArchivos;
class CreaArchivos;

void Menu::MenuPrincipal(){
    std::cout<<"---------------BIENVENIDO A TU BASE DE DATOS---------------\n";
    cout<<"\n";
    cout << "presione 1 para ingresar al menu principal\n";
    cin>> opcion;

    switch(opcion){
        case 1:
            MenuOpciones();
            system("cls");
            break;
        default:// Iniciar Juego 
            MenuOpciones();
            system("cls");
            break;
        
    }
}

void Menu::MenuOpciones(){
    char opcion2;
    cout<<"---------------MENU PRINCIPAL---------------\n";
    cout<<"         1. Ejecutar Querys\n";
    cout<<"         2. Mostrar Menu de Reportes\n";
    cout<<"         3.Ver Graficas de las Estructruras \n";
    cin>> opcion2;
    switch(opcion2){
        case '1':
            cout<<"\n    Has elegido Ejecutar una Query\n";
            system("cls");
            MenuQuerys();
            break;
        case '2': 
            cout<<"\n     Has elegido Ver Reportes\n"; 
            system("cls");
            MenuReportes();
            break;
        case '3': 
            cout<<"\n     Has elegido Ver Graficas\n"; 
            system("cls");
            MenuGraficas();
            break;
        default:
        break;
    }
}

void Menu:: MenuQuerys(){
    char opcionQ;
    string imput;
    vector<string>  milista;
    cout<<"---------------MENU QUERYS---------------\n";
    cout<<"         1.Crear una Tabla\n";
    cout<<"         2.Hacer una Insercion\n";
    cout<<"         3.Realizar una Busqueda\n";
    cout<<"         4.Ver Graficas de las Estructruras \n";
    cout<<"         cualquier otro numero para regresar al menu principal\n";
    cin>> opcionQ;
    switch(opcionQ){
        case '1' :// Menu Querys 
            cout << "  \n  Has elegido Crear una Tabla\n";
            cout<<"  Ej. CREATE TABLE nombreTabla ( campo tipoDato, . . . . ) \n";
            cout<<"  Es importante respetar los espacios \n";
            cin.ignore(); 
            getline(cin, imput, '\n');
            cout<< imput;
            milista = split(imput,' ');
            cout<< manejador.crearTabla(milista);
            cout<< "\n" <<"\n";
            MenuQuerys();
            break;
        case '2':
            cout << "     \n   Has elegido Hacer una Insercion\n";
            cout<<"  Ej. INSERT INTO table ( a, b, c) VALUES ( 1, 2, 3 ) ; \n";
            cout<<"Es importante respetar los espacios \n";
            cin.ignore();
            getline(cin, imput, '\n');
            milista = split(imput,' ');
            //manejador.InsertarFilas(milista);
            MenuQuerys();
            break;
        case '3':
            cout << "   Has elegido Realizar una busqueda\n";
            cout<<" Ej: SELECT nombre FROM usuarios WHERE edad = 30 \n  SELECT * FROM usuarios WHERE edad = 10\n\n";
            cout<<" Es importante respetar los espacios \n";
            cin.ignore();
            getline(cin, imput, '\n');
            milista = split(imput,' ');
            MenuQuerys();
            break;
        case '4':
            cout<<"\n     Has elegido Ver Graficas\n"; 
            MenuGraficas();
            break;
        default:
            MenuOpciones();
            break;
    }
}

void Menu:: MenuReportes(){
    char opcionR;
    int opcionTabla = 0;
    cout<<"\n---------------MENU REPORTES---------------\n";
    cout<<"         1.Cantidad de datos en todas las bases de datos\n";
    cout<<"         2.Cantidad de datos en una tabla\n";
    cout<<"         3.Ver filas Segun tipo de dato en una tabla\n";
    cout<<"         4.Ver numero de columnas de una base de datos\n";
    cout<<"         5.Ver Graficas de las Estructruras \n";
    cout<<"         Ingrese cualquier numero para regresar al menu Principal <--\n";
    cin>> opcionR;
    switch(opcionR){
        case '1': 
            MenuReportes();
            break;
        case '2':
            cout<<"\escriba el numero de la tabla que desea ver?  :\n";
            manejador.ListarTablas();
            cin >> opcionTabla;
            manejador.tablas.at(opcion);
            cout<<"         la cantidad de datos es:   " << manejador.tablas.at(opcion).CantidadDatosTabla(manejador.tablas.at(opcion).tablasHash);
            MenuReportes();
            break;
        case '3':
            cout<<"\nQue tabla desea ver?:\n";
            manejador.ListarTablas();
            cin >> opcionTabla;
            MenuReportes();
            break;
        case '4':
            MenuReportes();
            break;
        case '5':
            cout<<"     Has elegido Ver Graficas\n"; 
            MenuGraficas();
            break;
        default:// MenuPrincipal 
            MenuOpciones();
            break;
        
    }
}

void Menu :: MenuGraficas(){
    char opcionG;
    int opcionGrafica;
    cout<<"---------------MENU GRAFICAS---------------\n";
    cout<<"         1. Ver estructuras por tablas\n";
    cout<<"         1. Ver estructura completa\n";
    cout<<"         3. ver por fila\n"; 
    cout<<"         Regresar <--\n";
    cin>> opcionG;
    switch(opcionG){
        case '1': 
            cout<<"\escriba el numero de la tabla que desea ver?  :\n";
            manejador.ListarTablas();
            cin >> opcionGrafica;
            creadorArchivo.generarImagen( graficaaTabla.crearContenidoPorTabla(manejador.tablas.at(opcionGrafica)));
            break;
        case '2':
            creadorArchivo.generarImagen( graficaaTabla.crearContenidoPorTabla(manejador.tablas.at(opcionGrafica)));
            break;
        case '3':
            cout<<"escriba el numero de la tabla que desea ver?  :\n";
            manejador.ListarTablas();
            cin >> opcionGrafica;
            cout<< "has Elegido ver la tabla   "<< manejador.tablas.at(opcion).nombre;
            //cin>> opcionFila;
            //creadorArchivo. generarImagen( graficaaTabla.crearContenidoPorTabla(manejador.tablas.at(opcionGrafica)));
            break;
        default:// MenuPrincipal 
            MenuReportes();
            break;
        }
    }

vector<string> Menu ::  split(string str, char pattern) {

    int posInit = 0;
    int posFound = 0;
    string splitted;
    vector<string> resultados;

    while(posFound >= 0){
        posFound = str.find(pattern, posInit);
        splitted = str.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        resultados.push_back(splitted);
    }

    return resultados;
}

bool Menu:: validarCreate(vector<string>  input){
    while(input.max_size()){

    }
}