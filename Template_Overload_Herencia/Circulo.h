#pragma once
#include "Figuras.h"

class Circulo : public Figuras {
public:
	Circulo(int ra) : pi(3.14), Figuras(0, 0) {
		this->radio = ra;
	}
	~Circulo() { }

	float calcularArea();
	float calcularPerimetro();

	string tostring() const;
	void   imprimir() const;

private:
	const float pi;
	unsigned int radio;
};