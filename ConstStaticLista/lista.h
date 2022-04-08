#include "global.h"
#define MAX 5


class cLista {
private:
	static int cantidadNodos;
	int** ListaNumeros = NULL;
	int tamanio;
public:
	cLista(int);
	~cLista();

	bool AgregarNodo(int*);
	void MostrarLista();
	bool EliminarNodo(int);
	int BuscarNodo(int);
	bool ModificarNodo(int, int*);
	void OrdenarLista(); // Como ordenamos?
	void Redimension(int);
};