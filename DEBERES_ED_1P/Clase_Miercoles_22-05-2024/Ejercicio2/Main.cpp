/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Potencia de un numero (Recursividad)
Fecha Creacion: 22-05-2024
Fecha Modificacion: 22-05-2024
*/
#include "Potencia.cpp"

using namespace std;

int main() {
    int a, b;

    cout << "Ingrese la base ";
    cin >> a;
    if (a < 0) {
        cout << "El programa no maneja exponentes negativos." << endl;
        return 1;
    }

    cout << "Ingrese el exponente: ";
    cin >> b;

    int resultado = potenciaNum(a,b);

    cout << "El resultado de "<< a << " elevado a " << b << " es: "<< resultado << endl;

    return 0;
}