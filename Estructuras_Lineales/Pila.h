#ifndef PILA_H
#define PILA_H
#include <iostream>
using namespace std;
int const TamanoMax = 50;
template<class T>
class Pila
{
private:
	T* top;
	int indice;
	T** coleccion;
public:

	Pila();
	bool empty();
	T* pop();
	bool push(T*);
	~Pila();

};
#endif // 

template<class T>
Pila<T>::Pila()
{
	coleccion = new T *[TamanoMax];
	for (int i = 0; i < TamanoMax; i++) {
		coleccion[i] = nullptr;
	}
	indice = -1;
	top = nullptr;
}

template<class T>
 bool Pila<T>::empty()
{
	 if (coleccion[indice] == nullptr||indice<0) {
		 return true;
	 }
	 else {
		 return false;
	 }
}

 template<class T>
  T* Pila<T>::pop()
 {
	 if (empty() && indice > 1) {
		 cout << "Cola Vacia:  se retornará nullptr" << endl;
		 indice--;
		 return nullptr;
	 }
	 else if (empty() && indice <= 0) {
		 cout << "Peligro subdesborde:  se retornará nullptr" << endl;
		 return nullptr;

	 }
	 else {
		 cout <<"Indice :"<< indice << endl;
		 indice--;
		 T* col = coleccion[indice + 1];
		 coleccion[indice + 1] = nullptr;
		 return col ;
		 
	 }
 }

  template<class T>
   bool Pila<T>::push(T* entrante)
  {
	   if (indice >= -1 && indice < TamanoMax) {
		   indice++;
		   coleccion[indice] = entrante;
		   top = coleccion[indice];
		   return true;
	   }
	   else {
		   cout << "Peligro de StackOverflow" << endl;
		   cout << "No se ingresó el dato a la pila" << endl;
		   return false;
	   }
  }

   template<class T>
   inline Pila<T>::~Pila()
   {
	   for (unsigned i = 0; i < TamanoMax; i++) {
		   if (coleccion[i]!=nullptr) {
			   delete coleccion[i];
		   }
		   
	   }
	 // delete[]coleccion ;
   }
