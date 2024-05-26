#include "Operaciones.h"

template<typename T>
T Operador<T>::operar() const {
    if (elementos.empty()) {
        return T(); 
    }
    T resultado = elementos[0]; 
    for (size_t i = 1; i < elementos.size(); ++i) {
        resultado = operacion(resultado, elementos[i]);
    }
    return resultado;
}