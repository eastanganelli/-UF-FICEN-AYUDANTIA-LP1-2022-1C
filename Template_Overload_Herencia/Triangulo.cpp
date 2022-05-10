#include "Triangulo.h"

float Triangulo::calcularArea() {
	return ((this->altura * this->base) / 2);
}

float Triangulo::calcularPerimetro() {
	return base + (pow(pow(altura, 2) - pow(base / 2, 2) , 0.5)) * 2;
}

string Triangulo::tostring() const {
	return "Figura [Circulo]\nArea [ " + to_string((this->altura * this->base) / 2) +
		   " ]\nPerimetro: [ " + to_string(base + (pow(pow(altura, 2) - pow(base / 2, 2), 0.5)) * 2) + " ]";
}

void Triangulo::imprimir() const {
	cout << tostring() << endl;
}