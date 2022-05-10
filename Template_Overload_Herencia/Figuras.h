#pragma once
#include <iostream>
#include <string>

using namespace std;

class Figuras {
	friend class listaFiguras;

public:
	Figuras() {
		this->valorArea = 0;
		this->valorPerimetro = 0;
	}
	Figuras(float per = 0, float area = 0) {
		this->valorArea = area;
		this->valorPerimetro = per;
	}
	~Figuras() { }
	
	virtual float calcularArea();
	virtual float calcularPerimetro();
	
	virtual string tostring() const;
	virtual void   imprimir() const;
	
protected:
	float valorPerimetro;
	float valorArea;
};