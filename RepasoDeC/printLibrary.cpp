#include "printLibrary.h"

void imprimirPantalla() {
	printf("Imprimiendo vectores Primo y No Primo\n");
}
void imprimirPantalla(char const* texto, int* vectorNros, int longitud) {
	printf("%s\t", texto);

	for (int i = 0; i < longitud; i++)
		printf(" %d", vectorNros[i]);
	printf("\n");
}

FILE* abrirArchivo(char* archivo) {
	FILE* auxArchivo = fopen(archivo, "a+");
	return auxArchivo;
}

void cerrarArchivo(FILE*& archivo) {
	fclose(archivo);
	archivo = NULL;
}

void imprimirArchivo(FILE* archivo, char* texto) {
	fprintf(archivo, "%s", texto);
}

void imprimirArchivo(FILE* archivo, char const* texto, int* vectorNros, int longitud) {
	fprintf(archivo, "%s\t", texto);

	for (int i = 0; i < longitud; i++)
		fprintf(archivo, " %d", vectorNros[i]);
	fprintf(archivo, "\n");
}