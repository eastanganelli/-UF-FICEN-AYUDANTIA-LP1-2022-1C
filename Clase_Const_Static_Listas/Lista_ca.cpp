#include "Lista_ca.h"

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
	if (cBarcos::get_ca() >= cBarcos::get_ct())
		return false;
	
	this->MiFlota[cBarcos::get_ca()] = Valor;
	return true;
}

#pragma region Metodos_Modificar
bool cListedBarcos::Modificar(int Posicion, cBarcos* NuevoValor) {
	if (Posicion >= 0 && this->MiFlota[Posicion] != NULL) {
		cBarcos* Aux = this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NuevoValor;
		delete Aux;
		return true;
	} return false;
}

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
bool cListedBarcos::Eliminar(int Posicion) {
	if (Posicion >= 0 && this->MiFlota[Posicion] != NULL) {
		delete this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NULL;
		Ordenar();
		return true;
	} return false;
}

bool cListedBarcos::Eliminar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			delete this->MiFlota[i];
			this->MiFlota[i] = NULL;
			Ordenar();
			return true;
		}
	} return false;
}

bool cListedBarcos::Eliminar(cBarcos* MiBarco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == MiBarco) {
			delete this->MiFlota[i];
			this->MiFlota[i] = NULL;
			Ordenar();
			return true;
		}
	} return false;
}
#pragma endregion

#pragma region Metodos_Quitar
cBarcos* cListedBarcos::Quitar( int Posicion) {
	if (Posicion >= 0 && this->MiFlota[Posicion] != NULL) {
		cBarcos* Aux = this->MiFlota[Posicion];
		this->MiFlota[Posicion] = NULL;
		Ordenar();
		return Aux;
	} return NULL;
}

cBarcos* cListedBarcos::Quitar(unsigned int ID_Barco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i]->get_ID() == ID_Barco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NULL;
			Ordenar();
			return Aux;
		}
	} return NULL;
}

cBarcos* cListedBarcos::Quitar(cBarcos* MiBarco) {
	for (int i = 0; i < cBarcos::get_ca(); i++) {
		if (this->MiFlota[i] != NULL && this->MiFlota[i] == MiBarco) {
			cBarcos* Aux = this->MiFlota[i];
			this->MiFlota[i] = NULL;
			Ordenar();
			return Aux;
		}
	} return NULL;
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

void cListedBarcos::Ordenar() {
	for (int i = 0; i < cBarcos::get_ca(); i++)
		for (int j = i; j < cBarcos::get_ca() - 1; j++)
			if (this->MiFlota[j] == NULL) {
				cBarcos* Aux = this->MiFlota[j];
				this->MiFlota[j] = this->MiFlota[j + 1];
				this->MiFlota[j + 1] = Aux;
			}
}

void cListedBarcos::Imprimir() {
	cout << "Mi Listado: " << endl;
	for (unsigned int i = 0; i < cBarcos::get_ca(); i++) {
		cout << this->MiFlota[i]->get_nombre() << " " <<
				this->MiFlota[i]->get_codigoBarco() << " " <<
				this->MiFlota[i]->get_fechaFabricacion() << " " <<
				this->MiFlota[i]->get_fabricante() << endl;
	} cout << endl;
}