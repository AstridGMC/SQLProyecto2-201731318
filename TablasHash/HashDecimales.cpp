
class HashDecimales{
    int tamTabla=15;
    private:
    int ElegirIndice(float decimal);
};

int HashDecimales ::  ElegirIndice(float decimal){
    int indice = ((int)decimal)%(tamTabla);
    return indice;
}