#include "Lista.h"

Lista::Lista()
{
	inicio = NULL;
	fin = NULL;
}

void Lista::agregar(int valor)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = valor;
	//Agregar el primer elemento
	if (inicio == NULL) {
		inicio = nuevo;
		fin = inicio;
	}
	else {
		//Cuando ya elementos dentro de la lista
		fin->sig = nuevo;
		fin = nuevo;
	}
}

void Lista::mostrar()
{
	//veficar si la lista esta vacia 
	if (inicio == NULL) {
		cout << "Lita vacia" << endl;
	}
	else {
		//Cuando la lista tiene elemenetos
		Nodo* reco = inicio;
		int i = 0;
		while (reco != NULL) {
			i++;
			cout << i <<" - " <<reco->info << endl;
			reco = reco->sig;
		}
	}
}

void Lista::borrar(int pos)
{
	//Variables 
	Nodo* borrar;
	Nodo* reco;
	Nodo* ante = inicio;
	//veficar si la lista esta vacia 
	if (inicio == NULL) {
		cout << "Lita vacia" << endl;
	}
	else if (pos == 0) {
		cout << "No existe no existe el elemento 0 inicia en 1" << endl;
	}
	else if (pos > tamano()) {
		cout << "la posicion " << pos << " excede el tanano de lista que es " << tamano() << endl;
	}
	else if (pos == 1) {
		// Eliminar el primer elemento
		borrar = inicio;
		inicio = inicio->sig;
		delete borrar;
	}
	else if (pos == tamano()) {
		Nodo* borrarUltimo;
		// Eliminar el último elemento
		cout << "Valor del Ultimo elemento " << fin->info << endl;
		//borrar = fin;
		//cout << "Valor del elemento a elemento " << borrar->info << endl;
		reco = inicio->sig;
		ante = inicio;
		cout << "Valor del primer a elemento " << reco->info << endl;
		int i = 1;
		while (reco != NULL) {
			i++;
			if (i == pos-1) {
				cout << "Posicion " << i << "sera el nuevo ultimo "<< reco->info<<endl;
				borrarUltimo = fin;
				fin = ante;
			}else{
				ante = ante->sig;
				reco = reco->sig;
			}
		}

	}
	else {
		reco = inicio->sig;
		Nodo* borrarMedio;
		int i = 1;
		while (reco != NULL)
		{
			i++;
			//cout << i<< "-" <<reco->info << endl;
			if (i == pos) {
				cout << "Posicion "<< i <<" con valor de "<<reco->info << endl;
				borrarMedio = reco;
				ante->sig = reco->sig;
				delete borrarMedio;
				break;
			}
			else {
				ante = ante->sig;
				reco = reco->sig;
			}
			
		}
	}
}

int Lista::tamano()
{
	if (inicio == NULL) {
		return 0;
	}
	else {
		Nodo* reco = inicio;
		int i = 0;
		while (reco != NULL)
		{
			i++;
			reco = reco->sig;
		}
		return i;
	}
}
