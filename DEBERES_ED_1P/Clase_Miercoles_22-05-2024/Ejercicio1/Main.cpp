/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Factorial de un numero (Recursividad)
Fecha Creacion: 22-05-2024
Fecha Modificacion: 22-05-2024
*/
#include "Factorial.cpp"

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número para calcular su factorial: ";
    cin >> numero;

    if (numero < 0) {
        cout << "No hay factorial para números negativos." << endl;
        return 1;
    }

    int resultado = factorialNum(numero);

    cout << "El factorial de " << numero << " es " << resultado << endl;

    return 0;
}