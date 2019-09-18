// main.cpp
// Autor: Dorian Vallecillo
// Descripción: Aquí se encuentra una prueba de insercion, extraccion  
// y destruccion de datos con las diferentes estructuras de datos
//
#include <iostream>
#include "Estructuras_Lineales.h"
using namespace std;

int main() {
	Pila<string>* prueba = new Pila<string>();
	Cola<string>* cola = new Cola<string>();
	Lista_Simple<string>* lista = new Lista_Simple<string>();
	Doubly_Linked_List<string>* listaDole = new Doubly_Linked_List<string>();
	for (int i = 0; i < 50; i++) {
		int valor = i + 3;
		string* var = new string(valor, '*');
		prueba->push(var);
		cola->queue(var);
		lista->insertarAdelante(var);
		listaDole->addBack(var);
	}


	for (int i = 0; i < 90; i++) {
		if (lista->getDato(i) != nullptr) {
			cout << "Imprimiendo datos Lista" << endl;
			cout << "Dato #: " << i + 1 << "   " << *lista->getDato(i) << endl;
		}
	}
	lista->invertirListaRecursive();
	for (int i = 0; i < 90; i++) {
		if (lista->getDato(i) != nullptr) {
			cout << "Imprimiendo datos Lista(invertido)" << endl;
			cout << "Dato #: " << i + 1 << "   " << *lista->getDato(i) << endl;
		}
	}
	
	
	delete prueba;
	delete cola;
	delete lista;
	delete listaDole;

	

	return 0;
}