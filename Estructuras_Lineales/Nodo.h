#ifndef NODO_H
#define NODO_H
using namespace std;
template<class T>
struct Nodo
{
public:
	T* Dato;
	Nodo<T>* siguiente;

};
#endif
