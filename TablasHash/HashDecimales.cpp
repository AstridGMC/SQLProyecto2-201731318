

class HashDecimales  {
    int tamTabla=15;
    int datosAlmacenados;
    private:
    
    void Rehashing();
    public:
    int ElegirIndice(float decimal);
    HashDecimales crearTablaHash(string miNombre);
};


int HashDecimales ::  ElegirIndice(float decimal){
    int indice = ((int)decimal)%(tamTabla);
    return indice;
}

void HashDecimales:: Rehashing(){
    int carga = (datosAlmacenados / tamTabla)*100;
    if(carga>60){
        tamTabla = tamTabla+10;
    }
}