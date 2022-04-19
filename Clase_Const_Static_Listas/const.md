# Const [Constante]
## INDEX
### [¿Qué es un Const? ¿Para que sirve?]()
### [Formato de Const C++]()
### [Ejemplos](#ejemplos)
---

## ¿Qué es un Const? ¿Para que sirve?
* Algo que vale siempre el mismo valor, ejemplo: e = 2.718
* Los constantes nos permiten darle seguridad a nuestros datos.
* Las asignaciones a variables constantes se hace **AL MOMENTO DE DECLARACIÓN E INICIALIZACIÓN**
* Atributos constantes: Son atributos que no puedo cambiarle el valor una vez que se le asigno uno.
* Métodos constantes: So métodos que no permiten (por seguridad), poder editar atributos dentro de una clase, como tampoco poder llamar a métodos que modifiquen atributos.
* Métodos con parámetros constantes: los parámetros recibidos constantes, no pueden cambiar su valor dentro del método.
* Constantes puntero: Asignación de una memoria a un const type*, bloqueando la posibilidad de editar el puntero ni el valor contenido dentro del mismo.

### Formato de Const C++
```cpp
int x{10};
const int* i = &x; // Asignación de memoria de la variable x, ahora no puedo editar el *i ni el valor contenido dentro de esa localización
// ---------
const string ID // Atributo constante
string get_ID() const { // Método constante
    return this->ID;
}
// ---------
void set_ID(string input = "keyvalue") const { // Esto no se puede hacer
    this->ID = input;
}
// ---------
/* PROHIBIDO HACER */
void set_ID(string input = "keyvalue") { // Esto no se puede hacer
    this->ID = input;
}

void reSet_ID(string ID) { // Esto no se puede hacer
    set_ID(ID);
}
```

### Ejemplos
[Const Header](cConst.h)

[Const CPP](cConst.h)
