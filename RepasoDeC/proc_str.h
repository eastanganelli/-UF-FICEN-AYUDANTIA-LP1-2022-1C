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
/// División del vector Argv en sub-vector con los numeros
/// </summary>
/// <param name="misNros"></param>
/// <param name="PtrVectorNros"></param>
/// <param name="altura"></param>
void vectorizacionNumeros(char* misNros, char**& PtrVectorNros, int& altura);
void vectorizacionNumeros(char* misNros, int*&   PtrVectorNros, int& longitud);