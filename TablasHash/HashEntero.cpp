#include "HashEntero.h"


int HashEntero ::  ElegirIndice(int entero){
    int indice = ((int)entero)%(tamTabla);
    return indice;
}

