#ifndef HASHDECIMALES
#define HASHDECIMALES

#include <string>
using namespace std;

class HashDecimales  {
    int tamTabla=15;
    int datosAlmacenados;
    private:
    void Rehashing();
    public:
    int ElegirIndice(float decimal);
};


#endif