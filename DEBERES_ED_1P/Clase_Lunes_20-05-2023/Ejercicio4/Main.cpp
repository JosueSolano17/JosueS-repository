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
    MinMaxCalculator<int> intCalculator(10, 5);
    cout << "Máximo: " << intCalculator.max() << endl;
    cout << "Mínimo: " << intCalculator.min() << endl;

    MinMaxCalculator<double> doubleCalculator(10.5, 2.5);
    cout << "Máximo: " << doubleCalculator.max() << endl;
    cout << "Mínimo: " << doubleCalculator.min() << endl;

    return 0;
}