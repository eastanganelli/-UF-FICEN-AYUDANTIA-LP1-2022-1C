﻿/*
* Desarrolle un programa que recibe por argumento una o varias cadenas de numeros.
* Convierta estas cadenas a vectores de enteros y filtre en sub-vectores los valores primos y no primos.
* Luego imprima ambos vectores por pantalla y archivo.
*/

/*
* Argumentos de testeo
* Set 1: 23-63-7-86-99-2-6-4 32-24-1-65-87-8-9
* Set 2: 63,89,99,11,55,3,7 21-22-96-125-111-144
* Set 3: 66,99,111,55,44,33,11 85,58,41,14,17,19,458,999
* 
* ⚠ Si no recuerda como se ingresaba argumentos a un programa
* repase las clases de IRI y/o documentación den Cplusplus, CppReference
*/

#include "proc_str.h"
#include "proc_primos.h"
#include "printLibrary.h"

int main(int argc, char** argv) {
// int main(int argc, char* argv[]) // Es lo mismo de arriba?

	if (argc < 2) {
		printf("No se ingresaron argumentos.\n");
		return 0;
	}

	for (int i = 1; i < argc; i++) {
		int* vectorNros = NULL, longitud = 0;
		
		vectorizacionNumeros(argv[i], vectorNros, longitud);

		// => Procesamos la los datos enteros
		int* Primos = NULL,    * NoPrimos = NULL;
		int  cantidadPrimos = 0, cantidadNoPrimos = 0;

		// => Contamos la cantidad de datos primos y no primos
		contadorPrimos(vectorNros, longitud, cantidadPrimos, cantidadNoPrimos);

		// => Ponemos en vector los numeros Primos y No Primos
		vectorizacionPrimos(vectorNros, longitud, Primos, cantidadPrimos, NoPrimos, cantidadNoPrimos);

		// Imprimiendo los resultados
		imprimirPantalla();
		imprimirPantalla("Primos",    Primos,   cantidadPrimos);
		imprimirPantalla("No Primos", NoPrimos, cantidadNoPrimos);


		FILE* miArchivo = NULL;
		char* nombreOutput = new char[strlen("numeros_primos_%d.csv") + 1];
		
		// Archivo CSV
		sprintf(nombreOutput, "numeros_primos_%d.csv", i);

		miArchivo = abrirArchivo(nombreOutput, CSV);
		
		imprimirArchivo(miArchivo, "Primos",    Primos,   cantidadPrimos);
		imprimirArchivo(miArchivo, "No Primos", NoPrimos, cantidadNoPrimos);
		
		cerrarArchivo(miArchivo);
		delete[] nombreOutput;

		// Archivo BIN
		nombreOutput = new char[strlen("numeros_primos_%d.bin") + 1];
		sprintf(nombreOutput, "numeros_primos_%d.bin", i);
		miArchivo = abrirArchivo(nombreOutput, CSV);
		
		imprimirArchivo(miArchivo, cantidadPrimos * sizeof(Primos),     cantidadPrimos);
		imprimirArchivo(miArchivo, cantidadNoPrimos * sizeof(NoPrimos), cantidadNoPrimos);
		
		cerrarArchivo(miArchivo);
		delete[] nombreOutput;
		
		{
			delete[] vectorNros;
			delete[] Primos;
			delete[] NoPrimos;
		}
	}
	return 0;
}