/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Resta de un vector
Fecha Creacion: 22-05-2024
Fecha Modificacion: 22-05-2024
*/
#include <iostream>
#include "MinMax.h"

using namespace std;

int main() {
    MinMax<int> calcularEntero(10, 5);
    cout << "Máximo: " << calcularEntero.max() << endl;
    cout << "Mínimo: " << calcularEntero.min() << endl;

    MinMax<double> calcularDouble(10.5, 2.5);
    cout << "Máximo: " << calcularDouble.max() << endl;
    cout << "Mínimo: " << calcularDouble.min() << endl;

    return 0;
}