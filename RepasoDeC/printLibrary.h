#include "heading.h"

void imprimirPantalla();
void imprimirPantalla(char const* texto, int* vectorNros, int longitud);

FILE* abrirArchivo(char*  archivo);
void cerrarArchivo(FILE*&  archivo);
void imprimirArchivo(FILE* archivo, char* texto);
void imprimirArchivo(FILE* archivo, char const* texto, int* vectorNros, int longitud);