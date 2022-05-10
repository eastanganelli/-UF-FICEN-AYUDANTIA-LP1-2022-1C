#include "Figuras.h"

float Figuras::calcularArea() {
    return 0.0f;
}

float Figuras::calcularPerimetro() {
    return 0.0f;
}

string Figuras::tostring() const {
    return "Figura [-]\nArea: [-]\nPerimetro: [-]";
}

void Figuras::imprimir() const {
    cout << tostring() << endl;
}