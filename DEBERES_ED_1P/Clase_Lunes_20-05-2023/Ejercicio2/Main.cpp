/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Resta de un vector
Fecha Creacion: 20-05-2024
Fecha Modificacion: 20-05-2024
*/
#include <iostream>
#include <vector>
#include <functional>
#include "Resta.cpp"

using namespace std;

int main() {
    vector<int> numeros = {-10, 2, 3, 4, -5};
    auto restaLambda = [](int a, int b) { return a - b; };
    Restador<int> restadorInt(numeros, restaLambda);
    cout << "Resta de numeros enteros: " << restadorInt.restar() << endl;

    vector<double> decimales = {1.1, 2.2, 3.3, 4.4, -5.5};
    auto restaLambdaDouble = [](double a, double b) { return a - b; };
    Restador<double> restadorDouble(decimales, restaLambdaDouble);
    cout << "Resta de numeros decimales: " << restadorDouble.restar() << endl;

    return 0;
}