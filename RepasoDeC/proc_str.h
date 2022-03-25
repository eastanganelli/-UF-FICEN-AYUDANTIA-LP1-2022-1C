#include "heading.h"

#define Separadores ".,-"

/// <summary>
/// Convierte el vector de char a vector de int
/// </summary>
/// <param name="longitudNros"></param>
/// <param name="misNros"></param>
/// <param name="Nros"></param>
void vectorSTRaINT(int longitudNros, char**& misNros, int*& Nros);
/*<<**************************************************************************>>*/

/// <summary>
/// División del vector Argv en vector de char que contiene un vector de char.
/// </summary>
/// <param name="misNros"></param>
/// <param name="PtrVectorNros"></param>
/// <param name="altura"></param>
void vectorizacionNumeros(char* misNros, char**& PtrVectorNros, int& altura);
/// <summary>
/// División del vector Argv en un vector de int.
/// Realiza conversión de char a int (atoi).
/// </summary>
/// <param name="misNros"></param>
/// <param name="PtrVectorNros"></param>
/// <param name="longitud"></param>
void vectorizacionNumeros(char* misNros, int*& PtrVectorNros, int& longitud);