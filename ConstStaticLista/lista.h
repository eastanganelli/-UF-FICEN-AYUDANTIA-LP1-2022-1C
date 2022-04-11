#include "global.h"
#define MAX 5

<<<<<<< HEAD
#include "cBarcos.h"


/// <summary>
/// Unlisted: Sin listar, es decir, desordenado, puede haber
/// NULLs entre nodo y nodo.
/// </summary>

class cUnlistedBarcos {
private:
	bool eliminarNodos;
	cBarcos** MiFlota;
public:
	cUnlistedBarcos(unsigned int, bool);
	~cUnlistedBarcos();
	
	/// <summary>
	/// Agrega un nodo en la lista en la posicion
	/// que valga null
	/// </summary>
	/// <param name="Valor"></param>
	/// <returns>True/False</returns>
	bool Agregar(cBarcos*);
#pragma region Metodos_Modificar
	/// <summary>
	/// Modifica el nodo de la lista en la posicion indicada por el parametro Posicion
	/// </summary>
	/// <param name="Posicion"></param>
	/// <param name="NuevoValor"></param>
	/// <returns>True/False</returns>
	bool Modificar(unsigned int, cBarcos*);

	/// <summary>
	/// Modifica el nodo de la lista en la posicion indicada por el parametro ID_Barco
	/// </summary>
	/// <param name="ID_Barco"></param>
	/// <param name="NuevoValor"></param>
	/// <returns>True/False</returns>
	bool Modificar(unsigned int, cBarcos*);

	/// <summary>
	/// Modifica el nodo de la lista en la posicion indicada por el parametro ptr_Barco
	/// </summary>
	/// <param name="ptr_Barco"></param>
	/// <param name="NuevoValor"></param>
	/// <returns>True/False</returns>
	bool Modificar(cBarcos*, cBarcos*);
#pragma endregion
#pragma region Metodos_Eliminar
	/// <summary>
	/// Elimina un nodo de la lista en la posicion indicada por el parametro Posicion.
	/// </summary>
	/// <param name="Posicion"></param>
	/// <returns>True/False</returns>
	bool Eliminar(unsigned int);

	/// <summary>
	/// Elimina un nodo de la lista en la posicion indicada por el parametro ID_Barco
	/// </summary>
	/// <param name="ID_Barco"></param>
	/// <returns>True/False</returns>
	bool Eliminar(unsigned int);

	/// <summary>
	/// Elimina un nodo de la lista en la posicion indicada por el parametro ptr_Barco
	/// </summary>
	/// <param name="MiBarco"></param>
	/// <returns>True/False</returns>
	bool Eliminar(cBarcos*);
#pragma endregion
	// Quitar
		cBarcos* Quitar(unsigned int);
		cBarcos* Quitar(unsigned int);
		cBarcos* Quitar(cBarcos*);
	// Buscar
		int Buscar(unsigned int);
		int Buscar(cBarcos*);
	// Filtrar
		cBarcos** Filtrar();
	// Imprimir
		void Imprimir();
	void Redimension(int);
};

/// <summary>
/// Listed: la lista solo tiene NULLs
/// SOLO al final, es decir, esta ordenada
/// </summary>

class cListedBarcos {
private:
	bool eliminarNodos;
	cBarcos** MiFlota;
public:
	cListedBarcos(unsigned int, bool);
	~cListedBarcos();

	/// <summary>
	/// Agrega un nodo en la lista en la ultima posicion
	/// siempre y cuando el tamaño sea menor al tamano de la lista
	/// </summary>
	/// <param name="Valor"></param>
	/// <returns></returns>
	bool Agregar(cBarcos*);
#pragma region Metodos_Modificar
	/// <summary>
	/// Modifica el nodo de la lista en la posicion indicada por el parametro Posicion
	/// </summary>
	/// <param name="Posicion"></param>
	/// <param name="NuevoValor"></param>
	/// <returns>True/False</returns>
	bool Modificar(unsigned int, cBarcos*);

	/// <summary>
	/// Modifica el nodo de la lista en la posicion indicada por el parametro ID_Barco
	/// </summary>
	/// <param name="ID_Barco"></param>
	/// <param name="NuevoValor"></param>
	/// <returns>True/False</returns>
	bool Modificar(unsigned int, cBarcos*);

	/// <summary>
	/// Modifica el nodo de la lista en la posicion indicada por el parametro ptr_Barco
	/// </summary>
	/// <param name="ptr_Barco"></param>
	/// <param name="NuevoValor"></param>
	/// <returns>True/False</returns>
	bool Modificar(cBarcos*, cBarcos*);
#pragma endregion
#pragma region Metodos_Eliminar
	/// <summary>
	/// Elimina un nodo de la lista en la posicion indicada por el parametro Posicion.
	/// </summary>
	/// <param name="Posicion"></param>
	/// <returns>True/False</returns>
	bool Eliminar(unsigned int);

	/// <summary>
	/// Elimina un nodo de la lista en la posicion indicada por el parametro ID_Barco
	/// </summary>
	/// <param name="ID_Barco"></param>
	/// <returns>True/False</returns>
	bool Eliminar(unsigned int);

	/// <summary>
	/// Elimina un nodo de la lista en la posicion indicada por el parametro ptr_Barco
	/// </summary>
	/// <param name="MiBarco"></param>
	/// <returns>True/False</returns>
	bool Eliminar(cBarcos*);
#pragma endregion
	// Quitar
		cBarcos* Quitar(unsigned int);
		cBarcos* Quitar(unsigned int);
		cBarcos* Quitar(cBarcos*);
	// Buscar
		int Buscar(unsigned int);
		int Buscar(cBarcos*);
	// Filtrar
		cBarcos** Filtrar();
	// Imprimir
		void Imprimir();
	// Ordenar
		void Ordenar();
	// Redimension
		void Redimension(int);
=======

class cLista {
private:
	static int cantidadNodos;
	int** ListaNumeros = NULL;
	int tamanio;
public:
	cLista(int);
	~cLista();

	bool AgregarNodo(int*);
	void MostrarLista();
	bool EliminarNodo(int);
	int BuscarNodo(int);
	bool ModificarNodo(int, int*);
	void OrdenarLista(); // Como ordenamos?
	void Redimension(int);
>>>>>>> 988b4af0b92e6df98847d38c620652a353627f93
};