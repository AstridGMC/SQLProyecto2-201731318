#include "ManejadorQuierys.h"

string ManejadorQuerys:: seleccionarNombreTabla(vector<string> milista){
    string nombreTabla= NULL;
    if (milista.at(1)=="*"){
        return "*";
        
    }else{
        nombreTabla = milista.at(2);
        return nombreTabla;
    }
    
}

vector<Columna> ManejadorQuerys:: seleccionarColumnasTabla(vector<string> milista){
    vector<Columna> columnas;
    int contador =8;
    for(int i = 4 ; i < milista.size();i=i+2){
        cout<< i<< "\n";
        string palabra = split(milista.at(i), ',' ).at(0);
       // cout<< palabra << "\n";
        if(milista.at(i).c_str() == (char*)"," ){
            i = i+1;
            cout << "Coma   "<< i<< "\n";
        }else if(palabra == "("){
            contador = i;
        }else if(palabra == ")" || palabra == ");"){
            contador = -1;
        }else if(contador > -1){ 
            cout<< palabra << "\n";
            Columna columna = Columna();
            columna.nombre= milista.at(i);
            columna.tipo = milista.at(i+1);
            columnas.push_back(columna);
        }
    }
    return columnas;
}
// union de la lista de columnas a hacer la insercion
vector<Fila> ManejadorQuerys:: seleccionarFilasTabla(vector<string> milista1, vector<string> milista2){
    vector<Fila> filas;
    for(int j=0; j<milista1.size(); j++){
        Fila fila = Fila();
        fila.nombre= milista1.at(j);
        fila.dato = milista2.at(j);
        fila.identificador = contador;
        contador++;
        filas.push_back(fila);
    }
    return filas;
}

vector<Fila> ManejadorQuerys :: separarColumnasAInsertar(vector<string> milista){
    vector<Fila> filas;
    vector<string> columnas;
    vector<string> datos;
    int cont=  -1;
    int cont2=0;
    for(int i=1; i< milista.size();++i){
        string palabra = split(milista.at(i), ',' ).at(0);
        
        if(cont > -1){
            if(palabra != ")" || palabra != ");" ){
                if (cont2 ==0){
                    //cout << palabra << " tam de i   \n";
                    columnas.push_back(palabra);
                }else{
                    //cout << palabra << " tam de i   \n";
                    datos.push_back(palabra);
                }
            }else if(palabra == ")" || palabra != ");"){
                cont = -1;
                cont2 = 3;
                //cout << cont << " tam de CONT...  \n";
            }
        }
        if(palabra == "("){
            cont = i;
            //cout << cont << " AUMENTO tam de CONT...  \n"<<i;
        }
    }
    cout << datos.size() << " tam de las filas\n";
    filas = seleccionarFilasTabla(columnas,datos);
   // cout << filas.size() << " tam de las filas";
    return filas;
}

bool ManejadorQuerys:: AgregarColumnas(vector<string> milista){
    if(milista.size()>0){
        string nombre = seleccionarNombreTabla(milista);
        vector Columnas = seleccionarColumnasTabla(milista);
        Tabla tabla = tabla.AgregarColumnas(Columnas , nombre);
        tablas.push_back(tabla);
        return true;
    }else{
        return false;
    }
}

vector<string> ManejadorQuerys ::  split(string str, char pattern) {
    int posInit = 0;
    int posFound = 0;
    string splitted;
    vector<string> resultados;

    while(posFound >= 0){
        posFound = str.find(pattern, posInit);
        splitted = str.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        resultados.push_back(splitted);
    }

    return resultados;
}

void ManejadorQuerys:: InsertarFilas( vector<string> lista){
    Fila fila = Fila();
    string nombreTabla = seleccionarNombreTabla(lista);
    Tabla tabla = Tabla();
    fila.AgregarFilasTabla(separarColumnasAInsertar(lista), nodo, tablas ,nombreTabla);
    
}

string  ManejadorQuerys:: crearTabla(vector<string> miLista){
    if (AgregarColumnas( miLista)){
        return "Se Ha creado La Nueva Columna";
    }else{
        return "No se ha podido crear la nueva Columna";
    }
}

void ManejadorQuerys::   ListarTablas(){
    for(int i = 0 ; i< tablas.size(); i++){
        cout << i <<":" <<tablas.at(i).nombre;
    }
}