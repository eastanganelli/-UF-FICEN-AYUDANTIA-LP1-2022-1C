#pragma once
#include "global.h"

#define MAX 10

class cBarcos {
public:
	cBarcos(string, string, string, string, int);
	~cBarcos();
	
	// STATICS SET and GET
	static unsigned int get_ct();
	static unsigned int get_ca();
	static void set_ct(int);
	
	int get_ID() const;
	string get_nombre() const;
	string get_codigoBarco() const;
	string get_fechaFabricacion() const;
	string get_fabricante() const;
	int get_eslora() const;
	
private:
	static unsigned int ct;
	static unsigned int ca;
	
	const unsigned int id;
	
	const string Nombre, 
		codigoBarco, 
		fechaFabricacion,
		fabricante;
	const unsigned int eslora;
	string Capitan, Oficial;
};