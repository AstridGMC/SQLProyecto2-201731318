all: SQL
SQL: Main.o  Arreglo.o  Nodo.o  NodoArbol.o  TablaHash.o  Menu.o HashChar.o  Arbol.o ManejadorQuerys.o  Columna.o  Fila.o  HashEntero.o  HashDecimales.o HashString.o
	g++ Main.o Arreglo.o Nodo.o NodoArbol.o TablaHash.o Menu.o HashChar.o Arbol.o ManejadorQuerys.o Columna.o Fila.o  HashEntero.o  HashDecimales.o -o SQL
	./SQL

Arreglo.o: Arboles/Arreglo.cpp
	g++ -c Arboles/Arreglo.cpp

Nodo.o: Arboles/Nodo.cpp
	g++ -c Arboles/Nodo.cpp

NodoArbol.o: Arboles/NodoArbol.cpp
	g++ -c Arboles/NodoArbol.cpp

Main.o: Main.cpp
	g++ -c Main.cpp

Arbol.o: Arboles/Arbol.cpp
	g++ -c Arboles/Arbol.cpp

TablaHash.o: TablasHash/TablaHash.cpp
	g++ -c TablasHash/TablaHash.cpp

HashEntero.o: TablasHash/HashEntero.cpp
	g++ -c TablasHash/HashEntero.cpp

HashDecimales.o: TablasHash/HashDecimales.cpp
	g++ -c TablasHash/HashDecimales.cpp

HashString.o: TablasHash/HashString.cpp
	g++ -c TablasHash/HashString.cpp

HashChar.o: TablasHash/HashChar.cpp
	g++ -c TablasHash/HashChar.cpp

HashString.o: TablasHash/HashString.cpp
	g++ -c TablasHash/HashString.cpp


Menu.o: Clases/Menu.cpp
	g++ -c Clases/Menu.cpp
	

ManejadorQuerys.o: Clases/ManejadorQuerys.cpp
	g++ -c Clases/ManejadorQuerys.cpp


Columna.o: Clases/Columna.cpp
	g++ -c Clases/Columna.cpp	

Fila.o: Clases/Fila.cpp
	g++ -c Clases/Fila.cpp	

clean:
	rm -rf *.o SQL core
