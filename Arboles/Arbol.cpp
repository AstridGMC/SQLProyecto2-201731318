#include "Arbol.h"
#include "NodoArbol.h"

#include <iostream>

using namespace std;
class NodoArbol;


void Arbol:: InsertarNodo( NodoArbol *&arbol, float dato, int idNodo){
    if(arbol == NULL){
        NodoArbol *nuevoNodo = new NodoArbol();
        nuevoNodo = nuevoNodo->crearNodo(dato, idNodo,altura);
        raiz = nuevoNodo;
        altura ++;
         AlturaCalcular (arbol) ;
    }else{
        float valorRaiz = arbol->dato;
         AlturaCalcular (arbol) ;
        if(dato <valorRaiz){
            InsertarNodo(arbol->izquierdo,dato, idNodo);
        }else{
            InsertarNodo(arbol->derecho, dato, idNodo);
        }
    }
}


int Arbol:: Altura (NodoArbol* t) {
    if(t == NULL){
        return -1;
    }
    else {
        return t->altura;
    }
}

NodoArbol* Arbol:: rotacionizquierda(NodoArbol *t){ //Rotacion simple a la izqierda

    NodoArbol *aux = t->izquierdo;
    t->izquierdo=aux->derecho;
    aux->derecho = t;
    int maximovalorc;
    int maximovaloraux;
    if ((t)->izquierdo->altura > (t)->derecho->altura){
        maximovalorc= t->izquierdo->altura +1;      
    }else {
        maximovalorc= t->derecho->altura +1;
    }
    t->altura=maximovalorc;
    if (aux->izquierdo->altura >aux->derecho->altura){
     maximovaloraux= aux->izquierdo->altura+1;
    } else {
        maximovaloraux= aux->derecho->altura+1;
    }
    aux->altura=maximovaloraux;
    return aux;
}


void Arbol:: Balancear(NodoArbol* t) {
    if(t != NULL) {
        if (Altura(t->izquierdo) - Altura(t->derecho) == 2) {  /* FB indica izquierda */
            if (Altura (t->izquierdo->izquierdo) >= Altura (t->izquierdo->derecho)){
                /* simple hacia la izquierda */
                Altura(t->derecho);
                rotacionizquierda(t);
            }else{
                /* doble hacia la izquierda */
                rotaciondobleizq(t);
            }        
        }else if(Altura(t->derecho) - Altura(t->izquierdo) == 2) {  /* FB indica derecha */
            if (Altura(t->derecho->derecho) >= Altura(t->derecho->izquierdo))
            /* simple derecha */
            rotacionderecha(t);
        }else{
            /* doble derecha */
             rotaciondobleder(t);
        }
    }
}

NodoArbol* Arbol:: rotacionderecha(NodoArbol *c){ //Rotacion simple a la derecha

    NodoArbol *aux = c->derecho;
    c->derecho=aux->izquierdo;
    aux->izquierdo=c;
    int maximovalorc;
    int maximovaloraux;

    if ((Altura((c)->izquierdo)>(Altura((c)->derecho)))){
        maximovalorc= Altura((c)->izquierdo);
    }
    else {
        maximovalorc= Altura(c->derecho);
    }

    c->altura=maximovalorc+1;

    if (Altura(aux->izquierdo)>Altura(aux->derecho)){
        maximovaloraux= Altura(aux->izquierdo);
    }
    else {
        maximovaloraux= Altura(aux->derecho);
    }
    aux->altura=maximovaloraux+1;
    return aux;
}

NodoArbol* Arbol:: rotaciondobleizq(NodoArbol *c){
    NodoArbol *temp;
    c->izquierdo =rotacionderecha(c->izquierdo);
    temp=rotacionizquierda(c);
    return temp;
}

NodoArbol* Arbol:: rotaciondobleder(NodoArbol *c){
NodoArbol *temp;
c->derecho =rotacionizquierda(c->derecho);
temp=rotacionderecha(c);
return temp;
}

void Arbol:: AlturaCalcular (NodoArbol* t) {
    if(t != NULL){
        int miAltura= std::max(Altura((t)->izquierdo), Altura ((t)->derecho)) + 1 ;
        t->altura = std::max(Altura((t)->izquierdo), Altura ((t)->derecho)) + 1  ;
    }
}

void Arbol:: imprimirArbolInorden(NodoArbol *r){
    if (r!=NULL){
        imprimirArbolInorden(r->izquierdo);
        cout<<r->dato<<",";
        imprimirArbolInorden(r->derecho);
    }
 }
void Arbol:: imprimirArbolPreorden(NodoArbol *r){
    if (r!=NULL){
        cout<<r->dato<<",";
        imprimirArbolPreorden(r->izquierdo);
        imprimirArbolPreorden(r->derecho);
    }
 }


void Arbol:: imprimirArbolPostorden(NodoArbol *r){
if (r!=NULL){
        cout<<r->dato<<",";
        imprimirArbolPostorden(r->izquierdo);
        imprimirArbolPostorden(r->derecho);
    }
 }

int Arbol:: calcularNumeroDatos(int contador, NodoArbol* raiz1){
    if (raiz1!=NULL){
        contador++;
        calcularNumeroDatos(contador,raiz1->izquierdo);
        calcularNumeroDatos(contador , raiz1-> derecho);
    }else{
        return contador;
    }
}

NodoArbol* Arbol:: obtenerRaiz(){
    return raiz;
}
 