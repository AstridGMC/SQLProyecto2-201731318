all: SQL
SQL: TablaHash.o HashEntero.o HashDecimales.o Tabla.o HashString.o HashChar.o Columna.o Arbol.o Fila.o  Arreglo.o Nodo.o NodoArbol.o ManejadorQuerys.o Menu.o Main.o  creaGraficador.o creadorArchivos.o                 
	g++ NodoArbol.o Nodo.o  TablaHash.o HashEntero.o HashDecimales.o Tabla.o HashString.o HashChar.o Columna.o Arbol.o Fila.o  Arreglo.o  ManejadorQuerys.o Menu.o Main.o creaGraficador.o creadorArchivos.o -o SQL
	./SQL
Nodo.o: Arboles/Nodo.cpp
	g++ -c Arboles/Nodo.cpp

NodoArbol.o: Arboles/NodoArbol.cpp
	g++ -c Arboles/NodoArbol.cpp

Columna.o: Clases/Columna.cpp
	g++ -c Clases/Columna.cpp

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

Arbol.o: Arboles/Arbol.cpp
	g++ -c Arboles/Arbol.cpp	

Fila.o: Clases/Fila.cpp
	g++ -c Clases/Fila.cpp	

Arreglo.o: Arboles/Arreglo.cpp
	g++ -c Arboles/Arreglo.cpp


ManejadorQuerys.o: Clases/ManejadorQuerys.cpp
	g++ -c Clases/ManejadorQuerys.cpp

Menu.o: Clases/Menu.cpp
	g++ -c Clases/Menu.cpp

Main.o: Main.cpp
	g++ -c Main.cpp

Tabla.o: Clases/Tabla.cpp
	g++ -c Clases/Tabla.cpp

creaGraficador.o: Graphs/creaGraficador.cpp
	g++ -c Graphs/creaGraficador.cpp

