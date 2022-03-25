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



FILE* abrirArchivo(char* archivo, tipoArchivo Modo) {
	char apertura[4] = "\0";
	switch (Modo) {
		case CSV: {
			strcpy(apertura, "w+");
			break;
		}
		case DAT :
		case BIN: {
			strcpy(apertura, "wb+");
			break;
		}
	}
	FILE* auxArchivo = fopen(archivo, apertura);
	return auxArchivo;
}

void cerrarArchivo(FILE*& archivo) {
	fclose(archivo);
	archivo = NULL;
}

void imprimirArchivo(FILE* archivo, char const* texto) {
	fprintf(archivo, "%s", texto);
}

void imprimirArchivo(FILE* archivo, char const* texto, int* vectorNros, int longitud) {
	fprintf(archivo, "%s", texto);

	for (int i = 0; i < longitud; i++)
		fprintf(archivo, ",%d", vectorNros[i]);
	fprintf(archivo, "\n");
}
void imprimirArchivo(FILE* archivo, size_t sizeVector, int cantidadElementos) {
	sizePrimos datosSize = {
		sizeVector,
		cantidadElementos
	};
	fseek(archivo, 0, SEEK_END);
	fwrite(&datosSize, 1, sizeof(sizePrimos), archivo);
}