/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Calcular operaciones basicas y una lambda para cualquier tipo de operacion
Fecha Creacion: 20-05-2024
Fecha Modificacion: 20-05-2024
*/
#include <iostream>
#include "Calcular.cpp"

using namespace std;

int main() {
    Calcular<int> calcInt(10, 5);
    cout << "Suma: " << calcInt.suma() << endl;
    cout << "Resta: " << calcInt.resta() << endl;

    auto lambda = [](int x, int y) { return x * y; };
    cout << "Operación personalizada (x * y): " << calcInt.operacionPersonalizada(lambda) << endl;

    Calcular<double> calcDouble(10.5, 2.5);
    cout << "Suma: " << calcDouble.suma() << endl;
    cout << "Resta: " << calcDouble.resta() << endl;

    auto lambdaDouble = [](double x, double y) { return x / y; };
    cout << "Operación personalizada (x / y): " << calcDouble.operacionPersonalizada(lambdaDouble) << endl;

    return 0;
}
