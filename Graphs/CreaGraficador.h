#include <string> 
#include "../Clases/Tabla.h"
using namespace std;

class CreaGraficador{
    
    string contenidoArchivo=" ";
    string crearArboles(Arbol arbol);
    string crearHash(std::vector<TablaHash> tablas);
    public:
    string crearContenidoPorTabla(Tabla tabla);
    string ConvertToString (float number);
};