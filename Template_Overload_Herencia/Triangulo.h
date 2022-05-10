#pragma once
#include "Figuras.h"
class Triangulo : public Figuras {
public:	
	Triangulo(unsigned int b, unsigned int h) : Figuras(0, 0) {
		this->base   = b;
		this->altura = h;
	}
	~Triangulo() { }
	
	float calcularArea();
	float calcularPerimetro();

	string tostring() const;
	void   imprimir() const;

private:
	unsigned int base;
	unsigned int altura;
};