#pragma once
#include <iostream>
#define MAX = 15

using namespace std;

template <class T>

class listaTemplate {
	unsigned int ca, ct;
	bool flagDel;
	T** listado;

public:
	listaTemplate(unsigned int tam = MAX, bool flag = false);
	~listaTemplate();

	void operator+(T* newNode);
	void operator-(T* rmNode);
	T* operator[](unsigned int i);

	T* quitar(unsigned int i);
	T* quitar(T* qtNode);

	T* filtrar() {

	}
};