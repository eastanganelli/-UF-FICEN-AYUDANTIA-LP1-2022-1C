#include "Cuadrado.h"

float Cuadrado::calcularArea() {
	return this->ladoX *  this->ladoY;
}

float Cuadrado::calcularPerimetro() {
	return (this->ladoX + this->ladoY) * 2;
}

string Cuadrado::tostring() const {
	return "Figura [Circulo]\nArea [ " + to_string(this->ladoX * this->ladoY) +
		" ]\nPerimetro: [ " + to_string((this->ladoX + this->ladoY) * 2) + " ]";
}

void Cuadrado::imprimir() const {
	cout << tostring() << endl;
}