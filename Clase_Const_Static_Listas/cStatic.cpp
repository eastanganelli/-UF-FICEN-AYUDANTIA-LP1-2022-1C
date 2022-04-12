#include "cStatic.h"

int cStatic::cantidadObjetos = 0;

#pragma region cStatic_Methods
float cStatic_Methods::perimetro(float x_ = 0, float y_ = 0, float z_ = 0) {
	return x_ + y_ + z_;
}

float cStatic_Methods::area(float x_ = 0, float y_ = 0) {
	return x_ * y_;
}
#pragma endregion

#pragma region cStatic
cStatic::cStatic(float x_, float y_, float z_) {
	this->x = x_;
	this->y = y_;
	this->z = z_;
	this->cantidadObjetos++;
}

cStatic::~cStatic() {
	this->cantidadObjetos--;
}

string cStatic::to_string() {
	stringstream output;

	output << "El triangulo tiene Perimetro [" << cStatic_Methods::perimetro(this->x, this->y, this->z) <<
		"]" << endl << " Area [" << cStatic_Methods::area(this->x, this->y) << "]";

	return output.str();
}

int cStatic::get_cantidadObjetos() {
	return this->cantidadObjetos;
}
#pragma endregion