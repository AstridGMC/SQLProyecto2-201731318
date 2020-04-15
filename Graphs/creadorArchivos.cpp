#include "creadorArchivos.h"

#include <fstream>
#include <string> 
#include <cstdlib>
#include <vector>
using namespace std;


string CreadorArchivos:: EscribirArchivo(string archivo){
    string nombreArch = "grafica.dot";
    ofstream fs(nombreArch);

    for (int i = 0; i < archivo.size(); i++)
    {
        fs << archivo.at(i) /*<< endl*/;
    }
   fs.close();
   
    return nombreArch ;
}

void  CreadorArchivos:: generarImagen(string archivo){
    string path = EscribirArchivo( archivo);
    system("dot -Tpng grafica.dot -o imagen.png");
    system("nohum dysplay imagen.png");
}