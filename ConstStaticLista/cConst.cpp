#include "cConst.h"

cConst::~cConst() {
}

int cConst::SumaEnteros(const int& a, const int& b) {
    return (a + b);
}

int cConst::AreaCircunferencia(const int& Radio) {
    return (PI * Radio * Radio);
}

int cConst::PerimetroCircunferencia(const int& Radio) {
    return (2 * PI * Radio);
}

int cConst::getX() const {
    return this->x;
}

int cConst::getY() const {
    return this->y;
}

int cConst::getZ() const {
    return this->z;
}

void cConst::imprimir() const {
    cout << " (x, y , z) = (" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
}
