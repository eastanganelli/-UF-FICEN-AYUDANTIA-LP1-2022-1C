#pragma once
#include "global.h"

class cStatic_Methods {
public:
	static float perimetro(float x_, float y_, float z_);
	static float area(float x_, float y_);
};

class cStatic {
private:
	float x, y, z;
public:
	static int cantidadObjetos;

	cStatic(float x_, float y_, float z_);
	~cStatic();
	string to_string();
	int get_cantidadObjetos();
};