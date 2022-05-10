#include "listaTemplate.h"

template<class T>
inline listaTemplate<T>::listaTemplate(unsigned int tam, bool flag) {
	try {
		T** newList = new T * [tam];
	}
	catch (bad_alloc& ba) {
		cerr << "No se pudo solicitar la memoria" << ba.what() << endl;
		return;
	}
	this->flagDel = flag;
	this->ct = tam;
	for (int i = 0; i < ct; i++)
		listado[i] = NULL;
}

template<class T>
inline listaTemplate<T>::~listaTemplate() {
	if (flagDel)
		for (int i = 0; i < ct; i++)
			if (listado[i] != NULL) delete listado[i];

	delete[] listado;
}

template<class T>
inline void listaTemplate<T>::operator+(T* newNode) {
	try {
		if (newNode == NULL) throw new exception;
	}
	catch (...) {
		cerr << "No se pudo agregar el dato" << endl;
		return;
	}

	for (int i = 0; i < ct; i++)
		if (listado[i] == NULL) listado[i] = newNode;

	this->ca++;
}

template<class T>
inline void listaTemplate<T>::operator-(T* rmNode) {
	try {
		if (rmNode == NULL) throw new exception;
	}
	catch (...) {
		cerr << "No se pudo eliminar el dato indicado" << endl;
		return;
	}

	for (int i = 0; i < ct; i++)
		if (listado[i] == NULL) listado[i] = NULL;

	this->ca--;
}

template<class T>
inline T* listaTemplate<T>::operator[](unsigned int i) {
	T* node = NULL;
	try {
		node = listado[i] == NULL ? throw new exception : listado[i];
	}
	catch (...) {
		cerr << "No se pudo encontrar el dato indicado" << endl;
	}

	return node;
}

template<class T>
inline T* listaTemplate<T>::quitar(unsigned int i) {
	try {
		if (listado[i] == NULL) throw new exception;
	}
	catch (...) {
		cerr << "No se pudo quitar el dato indicado" << endl;
		return NULL;
	}
	T* node = listado[i];
	listado[i] = NULL;

	this->ca--;
	return node;
}

template<class T>
inline T* listaTemplate<T>::quitar(T* qtNode) {
	try {
		if (qtNode == NULL) throw new exception;
	}
	catch (...) {
		cerr << "No se pudo quitar el dato indicado" << endl;
		return NULL;
	}

	for (int i = 0; i < ct; i++)
		if (listado[i] == qtNode) listado[i] = NULL;

	this->ca--;
	return qtNode;
}