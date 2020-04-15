#ifndef HASHCHAR
#define HASHCHAR

#include <string>

class HashChar {
    int tamTabla = 15;
    int datosAlmacenados;
    void  Rehashing();
    public:
    int ElegirIndice(char input);
};


#endif