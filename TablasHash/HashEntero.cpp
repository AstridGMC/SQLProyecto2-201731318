class HashEntero{
    int tamTabla=20;
    private:
    int ElegirIndice(int entero);
};

int HashEntero ::  ElegirIndice(int entero){
    int indice = ((int)entero)%(tamTabla);
    return indice;
}