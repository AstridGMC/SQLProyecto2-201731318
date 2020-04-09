class HashChar{
    int tamTabla = 15;
    public:
    int ElegirIndice(char input);
};

int HashChar:: ElegirIndice(char input){
    float a = (float)input;
    //char b = (char)c;
    int indice = ((int)a% tamTabla);
    return indice;
}