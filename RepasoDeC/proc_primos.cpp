#include "proc_primos.h"

booleano esPrimo(int nro) {
	// Como verifico si el numero es primo?

	int contador = 2;

	for (int i = 2; i < nro && contador < 3; i++)
		if (nro % i == 0) contador++;

	return contador < 3 ? VERDADERO : FALSO;
}
void contadorPrimos(int* misNros, int longitud, int& cantidadPrimos, int& cantidadNoPrimos) {
	for (int i = 0; i < longitud; i++) {
		esPrimo(misNros[i]) ? cantidadPrimos++ : cantidadNoPrimos++;
	}
	// Que otra forma habría para calcularlo? Porpuestas?
}
void vectorizacionPrimos(int* misNros, int longitudNros, int*& Primos, int longitudPrimos, int*& NoPrimos, int longitudNoPrimos) {
	Primos   = new int[longitudPrimos];
	NoPrimos = new int[longitudNoPrimos];

	for (int i = 0, j = 0, k = 0; i < longitudNros; i++) {
		if(esPrimo(misNros[i])) {
			Primos[j] = misNros[i];
			j++;
		} else {
			NoPrimos[k] = misNros[i];
			k++;
		}
	}
}