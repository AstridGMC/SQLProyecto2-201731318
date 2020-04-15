#ifndef HASHENTERO
#define HASHENTERO
#include <string>
using namespace std;

class HashEntero   {
    int tamTabla=15;
    int datosAlmacenados;
    private:
    
    void Rehashing();
    public:
    int ElegirIndice(int entero);
    HashEntero  crearTablaHash(string miNombre);
};

#endif