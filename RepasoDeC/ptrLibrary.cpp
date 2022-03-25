#include "ptrLibrary.h"

void renew(char**& viejaPtrVector, int longitud) {
	// Como redimensiono un vector?

	// Posible solucion
	char** nuevaPtrVector = new char* [longitud];
	memcpy(nuevaPtrVector, viejaPtrVector, (longitud - 1) * sizeof(char*));
	delete[] viejaPtrVector;
	viejaPtrVector = nuevaPtrVector;
}

void renew(int*& viejoVector, int longitud) {
	int* nuevoVector = new int[longitud];
	memcpy(nuevoVector, viejoVector, (longitud - 1) * sizeof(int));
	delete[] viejoVector;
	viejoVector = nuevoVector;
}