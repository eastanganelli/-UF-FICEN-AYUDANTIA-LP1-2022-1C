#include "lista.h"

#pragma region Unlisted
cUnlistedBarcos::cUnlistedBarcos(unsigned int longitud = MAX, bool eliminar = false) {
	this->eliminarNodos = eliminar;
	this->MiFlota = new cBarcos * [longitud];
	cBarcos::set_ct(longitud);
	for (unsigned int i = 0; i < cBarcos::get_ct(); i++)
		this->MiFlota[i] = NULL;
}

cUnlistedBarcos::~cUnlistedBarcos() {
	if (eliminarNodos) {
		for (unsigned int i = 0; i < cBarcos::get_ct(); i++)
			if (this->MiFlota[i] != NULL)
				delete this->MiFlota[i];
	}
	delete[] this->MiFlota;
	cBarcos::set_ct(0);
}

bool cUnlistedBarcos::Agregar(cBarcos* Valor) {
	for (unsigned int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] == NULL) {
			this->MiFlota[i] = Valor;
			return true;
		}
	} return false;
}

#pragma region Metodos_Modificar
bool cUnlistedBarcos::Modificar(unsigned int Posicion, cBarcos* NuevoValor) {
	if (this->MiFlota[Posicion] != NULL) {
		cBarcos* Aux = this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NuevoValor;
		delete Aux;
		return true;
	} return false;
}

bool cUnlistedBarcos::Modificar(unsigned int ID_Barco, cBarcos* NuevoValor) {
	for (int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NuevoValor;
			delete Aux;
			return true;
		}
	} return false;
}

bool cUnlistedBarcos::Modificar(cBarcos* ptr_Barco, cBarcos* NuevoValor) {
	for (int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == ptr_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NuevoValor;
			delete Aux;
			return true;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Eliminar
bool cUnlistedBarcos::Eliminar(unsigned int Posicion) {
	if (this->MiFlota[Posicion] != NULL) {
		delete this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NULL;
		return true;
	} return false;
}

bool cUnlistedBarcos::Eliminar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			delete this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return true;
		}
	} return false;
}

bool cUnlistedBarcos::Eliminar(cBarcos* MiBarco) {
	for (int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == MiBarco) {
			delete this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return true;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Quitar
cBarcos* cUnlistedBarcos::Quitar(unsigned int Posicion) {
	if (this->MiFlota[Posicion] != NULL) {
		cBarcos* Aux = this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NULL;
		return Aux;
	} return false;
}

cBarcos* cUnlistedBarcos::Quitar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return Aux;
		}
	} return false;
}

cBarcos* cUnlistedBarcos::Quitar(cBarcos* MiBarco) {
	for (int i = 0; i < cBarcos::get_ct(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == MiBarco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return Aux;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Buscar
int cUnlistedBarcos::Buscar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ct(); i++)
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco)
			return i;
	return -1;
}

int cUnlistedBarcos::Buscar(cBarcos* ptr_Barco) {
	for (int i = 0; i < cBarcos::get_ct(); i++)
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == ptr_Barco)
			return i;
	return -1;
}
#pragma endregion

void cUnlistedBarcos::Imprimir() {
	cout << "Mi Listado: " << endl;
	for (unsigned int i = 0; i < cBarcos::get_ct(); i++)
		if (this->MiFlota[i] != NULL) {
			cout << this->MiFlota[i]->get_nombre() << " " <<
				this->MiFlota[i]->get_codigoBarco() << " " <<
				this->MiFlota[i]->get_fechaFabricacion() << " " <<
				this->MiFlota[i]->get_fabricante() << endl;
		}
	cout << endl;
}
#pragma endregion

#pragma region Listed
cListedBarcos::cListedBarcos(unsigned int longitud = MAX, bool eliminar = false) {
	this->eliminarNodos = eliminar;
	this->MiFlota = new cBarcos * [longitud];
	cBarcos::set_ct(longitud);
	for (unsigned int i = 0; i < cBarcos::get_ct(); i++)
		this->MiFlota[i] = NULL;
}

cListedBarcos::~cListedBarcos() {
	if (eliminarNodos) {
		for (unsigned int i = 0; i < cBarcos::get_ct(); i++)
			if (this->MiFlota[i] != NULL)
				delete this->MiFlota[i];
	}
	delete[] this->MiFlota;
	cBarcos::set_ct(0);
}

bool cListedBarcos::Agregar(cBarcos* Valor) {
	if (cBarcos::get_ca() < cBarcos::get_ct()) {
		this->MiFlota[cBarcos::get_ca()] = Valor;
		return true;
	} return false;
}

#pragma region Metodos_Modificar
/// <summary>
/// Modifica el nodo de la lista en la posicion indicada por el parametro Posicion
/// </summary>
/// <param name="Posicion"></param>
/// <param name="NuevoValor"></param>
/// <returns>True/False</returns>
bool cListedBarcos::Modificar(unsigned int Posicion, cBarcos* NuevoValor) {
	if (this->MiFlota[Posicion] != NULL) {
		cBarcos* Aux = this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NuevoValor;
		delete Aux;
		return true;
	} return false;
}

/// <summary>
/// Modifica el nodo de la lista en la posicion indicada por el parametro ID_Barco
/// </summary>
/// <param name="ID_Barco"></param>
/// <param name="NuevoValor"></param>
/// <returns>True/False</returns>
bool cListedBarcos::Modificar(unsigned int ID_Barco, cBarcos* NuevoValor) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NuevoValor;
			delete Aux;
			return true;
		}
	} return false;
}

/// <summary>
/// Modifica el nodo de la lista en la posicion indicada por el parametro ptr_Barco
/// </summary>
/// <param name="ptr_Barco"></param>
/// <param name="NuevoValor"></param>
/// <returns>True/False</returns>
bool cListedBarcos::Modificar(cBarcos* ptr_Barco, cBarcos* NuevoValor) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == ptr_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NuevoValor;
			delete Aux;
			return true;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Eliminar
bool cListedBarcos::Eliminar(unsigned int Posicion) {
	if (this->MiFlota[Posicion] != NULL) {
		delete this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NULL;
		return true;
	} return false;
}

bool cListedBarcos::Eliminar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			delete this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return true;
		}
	} return false;
}

bool cListedBarcos::Eliminar(cBarcos* MiBarco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == MiBarco) {
			delete this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return true;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Quitar
cBarcos* cListedBarcos::Quitar(unsigned int Posicion) {
	if (this->MiFlota[Posicion] != NULL) {
		cBarcos* Aux = this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NULL;
		return Aux;
	} return false;
}

cBarcos* cListedBarcos::Quitar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return Aux;
		}
	} return false;
}

cBarcos* cListedBarcos::Quitar(cBarcos* MiBarco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == MiBarco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NULL;
			return Aux;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Buscar
int cListedBarcos::Buscar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ca(); i++)
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco)
			return i;
	return -1;
}

int cListedBarcos::Buscar(cBarcos* ptr_Barco) {
	for (int i = 0; i < cBarcos::get_ca(); i++)
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == ptr_Barco)
			return i;
	return -1;
}
#pragma endregion

void cListedBarcos::Imprimir() {
	cout << "Mi Listado: " << endl;
	for (unsigned int i = 0; i < cBarcos::get_ca(); i++)
		if (this->MiFlota[i] != NULL) {
			cout << this->MiFlota[i]->get_nombre() << " " <<
				this->MiFlota[i]->get_codigoBarco() << " " <<
				this->MiFlota[i]->get_fechaFabricacion() << " " <<
				this->MiFlota[i]->get_fabricante() << endl;
		}
	cout << endl;
}
#pragma endregion