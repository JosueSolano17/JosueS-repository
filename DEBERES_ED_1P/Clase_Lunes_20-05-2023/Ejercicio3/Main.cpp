/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: OPeraciones con vector
Fecha Creacion: 20-05-2024
Fecha Modificacion: 20-05-2024
*/
#include <iostream>
#include <vector>
#include <functional>
#include "Operaciones.cpp"

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    auto sumaLambda = [](int a, int b) { return a + b; };
    Operador<int> operadorInt(numeros, sumaLambda);
    cout << "Suma de números enteros: " << operadorInt.operar() << endl;

    vector<double> decimales = {1.1, 2.2, 3.3, 4.4, 5};
    auto multiplicacionLambda = [](double a, double b) { return a * b; };
    Operador<double> operadorDouble(decimales, multiplicacionLambda);
    cout << "Multiplicación de números decimales: " << operadorDouble.operar() << endl;

    return 0;
}
