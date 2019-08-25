#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "Lista_Simple.h"
using namespace std;

int main() {
	Pila<string>* prueba = new Pila<string>();
	Cola<string>* cola = new Cola<string>();
	Lista_Simple<string>* lista = new Lista_Simple<string>();
	string* num = new string(2,'+');
	prueba->push(num);
	cola->queue(num);
	for (int i = 0; i < 50; i++) {
		int valor = i + 3;
		string* var = new string(valor, '*');
		prueba->push(var);
		cola->queue(var);
		lista->insertarFinal(var);
	}

	int i = 0;
	while (!prueba->empty()) {
		cout << "Imprimiendo datos Cola" << endl;
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
	delete prueba;
	delete cola;
	delete lista;

	

	return 0;
}