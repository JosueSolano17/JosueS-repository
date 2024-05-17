//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Plantilla de función que aplica una operación de conversión
//Fecha Creacion: 16-05-2024
//Fecha Modificacion: 16-05-2024

#include <iostream>
#include <conio.h>
#include <functional>
using namespace std;


template<class T>
T Cambiar_atmosfera(T a, T b, function<T(T,T)> cam, T factor_conversion) {
    return cam(a, b) * factor_conversion;
}

int main() {
    float a = 2; 
    const float psi_conversion_factor = 0.000145038;

    cout << Cambiar_atmosfera<float>(a, 101300, [](float a, float b) { return a / b; }, psi_conversion_factor)
         << " psi" << endl;

    return 0;
}
