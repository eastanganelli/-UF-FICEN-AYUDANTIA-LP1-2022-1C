#include "heading.h"

/// <summary>
/// Verifica si el numero ingresado es Primo o No Primo
/// </summary>
/// <param name="nro"></param>
/// <returns></returns>
booleano esPrimo(int nro);
/// <summary>
/// Cuenta la cantidad de Primos y No Primos, y lo retorna por derecha.
/// </summary>
/// <param name="misNros"></param>
/// <param name="longitud"></param>
/// <param name="cantidadPrimos"></param>
/// <param name="cantidadNoPrimos"></param>
void contadorPrimos(int* misNros, int longitud, int& cantidadPrimos, int& cantidadNoPrimos);
/// <summary>
/// Genera los vectores de Primos y No Primos, como sus longitudes.
/// Retornos hechos solo por derecha.
/// </summary>
/// <param name="misNros"></param>
/// <param name="longitudNros"></param>
/// <param name="Primos"></param>
/// <param name="longitudPrimos"></param>
/// <param name="NoPrimos"></param>
/// <param name="longitudNoPrimos"></param>
void vectorizacionPrimos(int* misNros, int longitudNros, int*& Primos, int longitudPrimos, int*& NoPrimos, int longitudNoPrimos);