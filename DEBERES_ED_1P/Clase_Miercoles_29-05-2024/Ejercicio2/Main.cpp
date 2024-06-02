/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Invertir Cadena
Fecha Creacion: 29-05-2024
Fecha Modificacion: 29-05-2024
*/
#include "InvertirC.cpp"
#include <iostream>

using namespace std;

int main() {
    char str[100];
    cout << "Introduce una cadena para invertir: ";
    cin.getline(str, 100);

    char* invertida = invertirCadena::invertir(str);
    if (invertida != nullptr) {
        cout << "La cadena invertida es: " << invertida << endl;
        delete[] invertida;
    } else {
        cerr << "Error: Se ha producido un error al invertir la cadena." << endl;
    }

    return 0;
}