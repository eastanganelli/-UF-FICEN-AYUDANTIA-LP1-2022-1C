#pragma once
#include "Figuras.h"
class Cuadrado : public Figuras {
public:
	Cuadrado(unsigned int lx, unsigned int ly) : Figuras(0, 0) {
		this->ladoX = lx;
		this->ladoY = ly;
	}
	~Cuadrado() { }
	
	float calcularArea();
	float calcularPerimetro();
	
	string tostring() const;
	void   imprimir() const;

private:
	unsigned int ladoX;
	unsigned int ladoY;
};