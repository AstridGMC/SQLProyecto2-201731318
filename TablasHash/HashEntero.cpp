
#include <string>

class HashEntero   {
    int tamTabla=15;
    int datosAlmacenados;
    private:
    
    void Rehashing();
    public:
    int ElegirIndice(int decimal);
    HashEntero  crearTablaHash(string miNombre);
};

int HashEntero ::  ElegirIndice(int entero){
    int indice = ((int)entero)%(tamTabla);
    return indice;
}

