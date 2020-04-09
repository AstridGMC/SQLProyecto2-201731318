#include <iostream>
#include<stdlib.h>
#include "TablasHash/HashChar.cpp"
using namespace std;
#include "Clases/Menu.cpp";
class Menu;
class HashChar;
int main(int argc, char **argv){
    HashChar miHash = HashChar();
    
    //char c[] = "a";
    //float a = 97.00;
    char b;
    cin >> b;
    cout << miHash.ElegirIndice(b)<<" indice es ";
    //Menu menu = Menu();
    //menu.MenuOpciones();
    return (0);
}
