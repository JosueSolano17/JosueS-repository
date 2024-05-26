#include "Calcular.h"

using namespace std;

template<typename T>
Calcular<T> :: Calcular(T a, T b) : a(a), b(b) {}

template<typename T>
T Calcular<T> ::suma()const{
    return a + b;
}

template<typename T>
T Calcular<T> ::resta()const{
    return a - b;
}

template<typename T>
T Calcular<T> ::operacionPersonalizada(function<T(T, T)> operacion) const{
    return operacion(a, b);
}
