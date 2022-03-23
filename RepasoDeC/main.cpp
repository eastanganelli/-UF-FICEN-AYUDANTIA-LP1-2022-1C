/*
* Desarrolle un programa que recibe por argumento una o varias cadenas de numeros-
* Convierta estas cadenas a entero y filtre en vectores, que valores son primos o no.
* Luego imprima ambos vectores por pantalla y/o archivo.
*/

#include "proc_str.h"
#include "proc_primos.h"
#include "printLibrary.h"

int main(int argc, char** argv) {
// int main(int argc, char* argv[]) // Es lo mismo de arriba?

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

		/*FILE* miArchivo = NULL;
		char* nombreOutput = new char[0];
		sprintf(nombreOutput, "numeros_primos_%d", i);

		miArchivo = abrirArchivo(nombreOutput);
		imprimirArchivo(miArchivo, );*/


		{
			delete[] vectorNros;
			delete[] Primos;
			delete[] NoPrimos;
		}
	}
	return 0;
}