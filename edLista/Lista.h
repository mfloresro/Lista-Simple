#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
class Lista
{
private:
	Nodo* inicio;
	Nodo* fin;

public:
	Lista();
	void agregar(int valor);
	void mostrar();
	void borrar(int pos);
	//void borrar(int valor);
//private:
	int tamano();
};

