#include "heading.h"

typedef struct {
	int bytesPrimos, bytesNoPrimos;
	int cantidadPrimos, cantidadNoPrimos;
} sizePrimos;

typedef enum { CSV, BIN, DAT } tipoArchivo;

/// <summary>
/// Imprimir por pantalla por default.
/// </summary>
void imprimirPantalla();
/// <summary>
/// Imprimir por pantalla pasando un texto constante, vector de nros y su logintud.
/// </summary>
/// <param name="texto"></param>
/// <param name="vectorNros"></param>
/// <param name="longitud"></param>
void imprimirPantalla(char const* texto, int* vectorNros, int longitud);
/*<<********************************************************************************>>*/

/// <summary>
/// Pasar nombre de archivo y formato, para ser abierto y devuelto por izquierda.
/// Modo selecciona el formato de apertura:
/// - CSV
/// - BIN/DAT
/// </summary>
/// <param name="archivo"></param>
/// <param name="Modo"></param>
/// <returns></returns>
FILE* abrirArchivo(char* archivo, tipoArchivo Modo);
/// <summary>
/// Cierra cualquier archivo y devuelve NULL por derecha cuando el mismo fue cerrado.
/// </summary>
/// <param name="archivo"></param>
void cerrarArchivo(FILE*&  archivo);
/// <summary>
/// Pasar puntero del archivo y el texto que se desea escribir. Escribe archivo csv.
/// </summary>
/// <param name="archivo"></param>
/// <param name="texto"></param>
void imprimirArchivo(FILE* archivo, char const* texto);
/// <summary>
/// Pasar puntero del archivo y el texto que se desea escribir, como también el vector de nros y su longitud. Escribe archivo csv.
/// </summary>
/// <param name="archivo"></param>
/// <param name="texto"></param>
/// <param name="vectorNros"></param>
/// <param name="longitud"></param>
void imprimirArchivo(FILE* archivo, char const* texto, int* vectorNros, int longitud);
/// <summary>
/// Pasar puntero del archivo, tamaño del vector y la cantidad de elementos. Escribe un archivo binario.
/// </summary>
/// <param name="archivo"></param>
/// <param name="texto"></param>
/// <param name="vectorNros"></param>
/// <param name="longitud"></param>
void imprimirArchivo(FILE* archivo, size_t sizeVector, int cantidadElementos);