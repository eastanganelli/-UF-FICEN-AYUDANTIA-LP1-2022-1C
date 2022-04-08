#pragma once
#include "global.h"

class cConst {
private:
	const float PI = 3.14;
	const int x, y, z;
public:
	cConst(float x_, float y_, float z_): x(x_), y(y_), z(z_) {}
	~cConst();
	
	int SumaEnteros(const int& a, const int& b);
	int AreaCircunferencia(const int& Radio);
	int PerimetroCircunferencia(const int& Radio);

	int getX() const;
	int getY() const;
	int getZ() const;

	void imprimir() const;
};