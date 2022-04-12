#include "cBarcos.h"

unsigned int cBarcos::ct = 0;
unsigned int cBarcos::ca = 0;

cBarcos::cBarcos(string Nombre_, string codigoBarco_, string fechaFabricacion_, string fabricante_, int eslora_) : id(ca++), Nombre(Nombre_), codigoBarco(codigoBarco_), fechaFabricacion(fechaFabricacion_), fabricante(fabricante_), eslora(eslora_) {
	this->Capitan = "";
	this->Oficial = "";
}

cBarcos::~cBarcos() { ca--; }

unsigned int cBarcos::get_ct() { return ct; }
unsigned int cBarcos::get_ca() { return ca; }
void cBarcos::set_ct(int longitud) {
	cBarcos::ct = longitud;
}

int cBarcos::get_ID() const { return this->id; }
string cBarcos::get_nombre() const { return this->Nombre; }
string cBarcos::get_codigoBarco() const { return this->codigoBarco; }
string cBarcos::get_fechaFabricacion() const { return this->fechaFabricacion; }
string cBarcos::get_fabricante() const { return this->fabricante; }
int cBarcos::get_eslora() const { return this->eslora; }

