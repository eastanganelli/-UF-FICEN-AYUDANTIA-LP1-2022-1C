# Pointers [Punteros]
---
## INDEX
### [¿Para qué sirven los punteros?](#para-qué-sirven-los-punteros)
### [En C/C++](#en-cc)
### [Ejemplo Completo](#ejemplo-completo)
---
### ¿Para qué sirven los punteros?
- Los punteros sirven para pedirle memoria al sistema, y poder trabajar según lo que se requiera.
- Me permite trabajar como si la variable fuera global en el programa.
- Mi único limite es la cantidad de memoria disponible en el momento en el sistema.

### En C/C++
```cpp
/* En C */
int main() {
    int* x = (int*)calloc(5, sizeof(int)),
       * y = (int*)malloc(5*sizeof(int));
       
    printf("%d", *(x+3));
    
    free(x);
    free(y);
}
// ---------
/* En C++ */
int main() {
    int* x = new int[5];
       
    printf("%d", x[3]); // x[3] == *(x+3)
    
    delete[] x;
}
```

### Ejemplo Completo
[Memoría Dinámica](main.cpp)