#include "proc_str.h"
#include <iostream>

void vectorSTRaINT(int longitudNros, char**& misNros, int*& Nros) {
	Nros = new int[longitudNros];

	for (int i = 0; i < longitudNros; i++) {
		std::cout << misNros[i];
		Nros[i] = atoi(misNros[i]);
	}

	for (int i = 0; i < longitudNros; i++)
		delete misNros[i];
	delete[] misNros;
}

void vectorizacionNumeros(char* misNros, char**& PtrVectorNros, int& altura) {
	char** PtrVector = new char* [0], * pch;
	pch = strtok(misNros, Separadores);
	while (pch != NULL) {
		if (pch != NULL) {
			altura++;
			renew(PtrVector, altura);
			PtrVector[altura - 1] = pch;
		}
		pch = strtok(NULL, Separadores);
	}
}

void vectorizacionNumeros(char* misNros, int*& PtrVectorNros, int& longitud) {
	int*  PtrVector = new int[0];
	char* pch;
	pch = strtok(misNros, Separadores);
	while (pch != NULL) {
		if (pch != NULL) {
			longitud++;
			renew(PtrVector, longitud);
			PtrVector[longitud - 1] = atoi(pch);
		}
		pch = strtok(NULL, Separadores);
	}
	PtrVectorNros = PtrVector;
}