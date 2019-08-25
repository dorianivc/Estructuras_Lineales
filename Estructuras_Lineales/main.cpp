#include <iostream>
#include "Pila.h"
using namespace std;

int main() {
	Pila<string>* prueba = new Pila<string>();
	string* num = new string(2,'+');
	prueba->push(num);
	for (int i = 0; i < 50; i++) {
		string* var = new string(i + 3, '*');
		prueba->push(var);
	}

	int i = 0;
	while (!prueba->empty()) {
		cout << "Dato #: " << i + 1 << "   " << *prueba->pop() << endl;
		i++;
	}
	delete prueba;
	return 0;
}