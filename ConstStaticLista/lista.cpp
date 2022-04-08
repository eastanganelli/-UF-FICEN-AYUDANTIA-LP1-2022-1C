#include "lista.h"

cLista::cLista(int Longitud = MAX) {
	this->ListaNumeros = new int* [Longitud];
	
	this->cantidadNodos = Longitud;
	
	for (int i = 0; i < cantidadNodos; i++)
		this->ListaNumeros[i] = NULL;
}

cLista ::~cLista() {
	if (ListaNumeros != NULL) {
		for (int i = 0; i < cantidadNodos; i++) {
			delete ListaNumeros[i];
		}
	}
	delete[] ListaNumeros;
}

bool cLista::AgregarNodo(int* Valor) {
	for (int i = 0; i < cantidadNodos; i++) {
		if (ListaNumeros[i] == NULL) {
			ListaNumeros[i] = Valor;
			tamanio++;
			return true;
		}
	} return false;
}

void cLista::MostrarLista() {
	cout << "Mi Listado: ";
	for (int i = 0; i < cantidadNodos; i++)
		if (ListaNumeros[i] != NULL)
			cout << *ListaNumeros[i] << " ";
	cout << endl;
}

bool cLista::EliminarNodo(int ID_NODO) {
	if (ListaNumeros[ID_NODO] != NULL) {
		delete ListaNumeros[ID_NODO];
		ListaNumeros[ID_NODO] = NULL;
		tamanio--;
		return true;
	} return false;
}

int cLista::BuscarNodo(int ValorBuscado) {
	for (int i = 0; i < cantidadNodos; i++)
		if (ListaNumeros[i] != NULL  && *ListaNumeros[i] == ValorBuscado)
			return i;
	return -1;
}

bool cLista::ModificarNodo(int ID_NODO, int* NuevaValor) {
	if (ListaNumeros[ID_NODO] != NULL) {
		int* aux = ListaNumeros[ID_NODO];
		ListaNumeros[ID_NODO] = NuevaValor;
		delete aux;
		return true;
	} return false;
}
