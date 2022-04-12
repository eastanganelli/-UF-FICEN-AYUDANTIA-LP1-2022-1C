#include "cStatic.h"
#include "cConst.h"
#include "Lista_ct.h"
#include "Lista_ca.h"

int main() {
#pragma region ProbandoStatic

	cStatic* MiEstatico = new cStatic(1, 2, 3);
	cStatic* MiEstatico2 = new cStatic(9, 3, 6);
	
	// Imprimo el valor de cStatic::cantidadObjetos
	cout << "Cantidad Objetos de cStatic:" << cStatic::cantidadObjetos << endl;
	// Esta opción también es valida como la de arriba, pero obteniendo el valor
	// usando método get_CantidadObjetos()
	cout << "Cantidad Objetos de cStatic:" << MiEstatico->get_cantidadObjetos() << endl;

	// Imprimo lo que devuelve el To_String de MiEstatico
	cout << MiEstatico->to_string() << endl;
	// Imprimo lo que devuelve el To_String de MiEstatico2
	cout << MiEstatico2->to_string() << endl;

	// Calcular Perimetro y Area a Mano
	cout << "Perimetro:" << cStatic_Methods::perimetro(5, 7, 4) << endl;
	cout << "Area:" << cStatic_Methods::area(5, 7) << endl;
	
	delete MiEstatico;
	delete MiEstatico2;
#pragma endregion
#pragma region ProbandoConst
	cConst* MiConstante = new cConst(1, 2, 3);
	
	// Imprimo el valor de MiConstante
	MiConstante->imprimir();

	// Imprimiendo funciones const
	cout << "Sumando Enteros: " << MiConstante->SumaEnteros(56, 84) << endl <<
		"Area Circunferencia: " << MiConstante->AreaCircunferencia(5) << endl <<
		"Perimetro Circunferencia " << MiConstante->PerimetroCircunferencia(5) << endl;

	delete MiConstante;
#pragma endregion
#pragma region ProbandoLista
	cUnlistedBarcos* MisBarcos = new cUnlistedBarcos(3, true);
	
	MisBarcos->Agregar(new cBarcos("RMS Olympic", "131346", "31/05/1911", "White Star Line", 265));
	MisBarcos->Agregar(new cBarcos("RMS Titanic", "131428", "15/05/1912", "White Star Line", 269));
	MisBarcos->Agregar(new cBarcos("HMHS Britannic", "G618", "12/12/1915", "White Star Line", 269));
	
	MisBarcos->Imprimir();

	MisBarcos->Eliminar(1);
	
	MisBarcos->Imprimir();

	delete MisBarcos;
#pragma endregion
	return 0;
}