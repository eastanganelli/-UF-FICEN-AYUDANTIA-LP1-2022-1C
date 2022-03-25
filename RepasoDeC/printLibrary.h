#include "heading.h"

typedef struct {
	int bytesPrimos, bytesNoPrimos;
	int cantidadPrimos, cantidadNoPrimos;
} sizePrimos;

typedef enum { CSV, BIN, DAT } tipoArchivo;

void imprimirPantalla();
void imprimirPantalla(char const* texto, int* vectorNros, int longitud);
/*<<********************************************************************************>>*/
FILE* abrirArchivo(char* archivo, tipoArchivo Modo);
void cerrarArchivo(FILE*&  archivo);
void imprimirArchivo(FILE* archivo, char const* texto);
void imprimirArchivo(FILE* archivo, char const* texto, int* vectorNros, int longitud);
void imprimirArchivo(FILE* archivo, size_t sizeVector, int cantidadElementos);