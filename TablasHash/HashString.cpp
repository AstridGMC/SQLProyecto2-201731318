#include <iostream>
using namespace std;

class HashString{
    char ingreso[];
    int indiceIngreso;
    int tamTabla;
    public:
    void ingresarDato();
    int ElegirIndice(char miString[] );
    void crearHashString();
    
};

int HashString ::  ElegirIndice(char miString[]){
    int indice = ((int)miString)%(tamTabla);
    return indice;
}

