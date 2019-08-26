// Main.cpp
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
	
	int i = 0;
	while (!prueba->empty()) {
		cout << "Imprimiendo datos Pila" << endl;
		cout << "Dato #: " << i + 1 << "   " << *prueba->pop() << endl;
		i++;
	}
	i = 0;
	while (!cola->empty()) {
		cout << "Imprimiendo datos Cola" << endl;
		cout << "Dato #: " << i + 1 << "   " << *cola->dequeue() << endl;
		i++;
	}
	
	for (int i = 0; i < 90; i++) {
		if (lista->getDato(i) != nullptr) {
			cout << "Imprimiendo datos Lista" << endl;
			cout << "Dato #: " << i + 1 << "   " << *lista->getDato(i) << endl;
		}
	}
	
	for (int i = 1; i < 90; i++) {
		bool prueba = false;
		if (listaDole->getDato(i) != nullptr) {
			prueba = true;
			cout << "Imprimiendo datos Lista Doble" << endl;
			cout << "Dato #: " << i  << "   " << *listaDole->getDato(i) << endl;
		}
	}
	delete prueba;
	delete cola;
	delete lista;
	delete listaDole;

	

	return 0;
}