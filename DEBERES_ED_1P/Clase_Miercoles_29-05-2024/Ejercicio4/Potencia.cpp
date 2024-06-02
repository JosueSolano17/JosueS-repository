#include "Potencia.h"
#include <iostream>

long long Potencia::calcular(int base, int exponente) {
    if (exponente < 0) {
        std::cerr << "Error: El exponente no puede ser negativo." << std::endl;
        return -1;
    }
    if (exponente == 0) {
        return 1;
    }
    return base * calcular(base, exponente - 1);
}