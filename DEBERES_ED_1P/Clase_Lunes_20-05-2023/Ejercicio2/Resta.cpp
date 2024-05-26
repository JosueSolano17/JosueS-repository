#include "Resta.h"

template<typename T>
T Restador<T>::restar() const {
    T resultado = T();
    for (const auto& elem : elementos) {
        resultado = operacion(resultado, elem);
    }
    return resultado;
}

