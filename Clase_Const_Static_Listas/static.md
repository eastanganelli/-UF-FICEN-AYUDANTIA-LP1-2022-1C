# Static [Estático]
## INDEX
### [¿Qué es un Static? ¿Para que sirve?](#qué-es-un-static-para-que-sirve)
### [Formato de Static C++](#formato-de-static-c)
### [Ejemplos](#ejemplos)
---

## ¿Qué es un Static? ¿Para que sirve?
* Nos permite compartir un atributo y/o método entre todos los objetos de la misma clase.
* Puedo acceder usando el operador ::, ie: cStatic::Cantidad.
* El nivel de privacidad nos permite:
    * Privado/Protegido: solo objetos de la misma clase puede acceder a los static
    * Publico: cualquiera puede acceder usando el operador ::.
* Los métodos static no pueden usar **this**, ya que no pertenece al objeto sino a la clase.
* Métodos static, solo pueden llamar a atributos y métodos static.
* Puedo usar atributos/métodos con static y const, ie: const static double pi = 3.14.

### Formato de Static C++
```cpp
class cStatic { // Clase con Métodos Static
public:
	static float perimetro(float x_, float y_, float z_);
	static float area(float x_, float y_);
};
// ---------
class cStatic { // Clase con atributos Static
private:
	float x, y, z;
public:
	static int cantidadObjetos;

	cStatic(float x_, float y_, float z_);
	~cStatic();
	string to_string();
	int get_cantidadObjetos();
};
```

### Ejemplos
[Static Header](cStatic.h)
[Static CPP](cStatic.h)