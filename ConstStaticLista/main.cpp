#include "cStatic.h"
#include "cConst.h"
#include "lista.h"


int cStatic::cantidadObjetos = 0;
int cLista::cantidadNodos = 0;

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
	cLista* MiListado = new cLista(8);

	// Agregamos unos nodos
	MiListado->AgregarNodo(new int{ 23 });
	MiListado->AgregarNodo(new int{ 25 });
	MiListado->AgregarNodo(new int{ 27 });
	MiListado->AgregarNodo(new int{ 28 });
	MiListado->AgregarNodo(new int{ 19 });

	// Mostrar Lista
	MiListado->MostrarLista();

	// Modificar Nodo con Valor 25
	int id_ = MiListado->BuscarNodo(25);
	if(id_ != -1) // Si es -1, no se encontro el valor bsucado
		MiListado->ModificarNodo(id_, new int{ 20 });

	// Eliminar 2 Nodos
	id_ = MiListado->BuscarNodo(28);
	if (id_ != -1) // Si es -1, no se encontro el valor bsucado
		MiListado->EliminarNodo(id_);
	id_ = MiListado->BuscarNodo(60);
	if (id_ != -1) // Si es -1, no se encontro el valor bsucado
		MiListado->EliminarNodo(id_);

	// Reimprimo mi lista
	MiListado->MostrarLista();

	delete MiListado;
#pragma endregion
	return 0;
}