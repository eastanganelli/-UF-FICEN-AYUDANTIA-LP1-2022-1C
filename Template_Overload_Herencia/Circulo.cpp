#include "Circulo.h"

float Circulo::calcularArea() {
	return pi * pow(radio, 2);
}

float Circulo::calcularPerimetro() {
	return 2 * pi * radio;
}

string Circulo::tostring() const {
	return "Figura [Circulo]\nArea [ " + to_string(pi * pow(radio, 2)) + " ]\nPerimetro: [ " + to_string(2 * pi * radio) + " ]";
}

void Circulo::imprimir() const {
	cout << tostring() << endl;
}
