# List [LISTA]
# INDEX
### [¿Qué es una Lista? ¿Para que sirve?](#qué-es-una-lista-para-que-sirve)
### [Formato de Listas C++](#comó-serán-las-listas-en-c)
### [Ejemplos](#ejemplos)
* [Lista Desordenada](#listas-desordenada)
* [Lista Ordenada](#lista-ordenada)

---

## Qué es una Lista? ¿Para que sirve?
* Es un conjunto de elementos que poseo listados de forma ordenada o desordenada
* Las listas sirven para almacenar nuestros datos 

## Comó serán las listas en C++?
```cpp
class MiLista {
    private:
		bool eliminarNodos;
		TipoElemento** MiLista;
	public:
		cUnlistedBarcos(unsigned int longitud, bool eliminar);
		~cUnlistedBarcos();
		bool Agregar(TipoElemento* NuevoNodo);
		bool Modificar(unsigned int Posicion, TipoElemento* NuevoValor);
		bool Eliminar(unsigned int Posicion);
		TipoElemento* Quitar(unsigned int Posicion);
		int Buscar(unsigned int ID);
		TipoElemento** Filtrar(unsigned int ValorFiltro);
		void Imprimir();
};
```

## Diferencia entre Lista Ordenada y Desordenada
* Lista desordenada:
    *   Agrega en el primer NULL que encuentra.
    *   Posee NULLs entre nodos.
    *   Al redimensionar, hay que tener cuidado de no eliminar o perder datos.
    *   Para Modificar, Quitar, Eliminar o Buscar, siempre tenemos que recorrer la lista hasta el tamaño total de la misma.
* Lista Ordenada:
    *   Agrego en la posición siguiente al último elemento agregado.
    *   Al redimensionar, solo tengo que tener cuidado de no achicar más de lo que debo.
    *   Para Modificar, Quitar, Eliminar o Buscar, siempre tenemos que recorrer la lista hasta el tamaño actual.

## Ejemplos
### Listas Desordenada
[Lista Desordenada Header](Lista_ct.h)

[Lista Desordenada CPP](Lista_ct.cpp)
### Lista Ordenada
[Lista Ordenada Header](Lista_ca.h)

<<<<<<< HEAD
[Lista Ordenada CPP](Lista_ca.cpp)
=======
[Lista Ordenada CPP](Lista_ca.cpp)
>>>>>>> e8b8c66e9de8d9447defc6138b806791f17fc120
