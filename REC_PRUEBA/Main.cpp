#include <iostream>
#include "MatrizExp.cpp"

using namespace std;

int main() {
    int filas, columnas, exp;

    cout << "Ingresa el número de filas: ";
    cin >> filas;
    cout << "Ingresa el número de columnas: ";
    cin >> columnas;

    Matriz<int> mat(filas, columnas);
    mat.ingresarDatos();

    cout << "Ingresa la potencia a la que deseas elevar la matriz: ";
    cin >> exp;

    cout << "Matriz original:" << endl;
    mat.imprimir();

    mat.exponente(exp);
    cout << "Matriz elevada al exponente " << exp << ":" <<endl;
    mat.imprimir();

    return 0;
}
