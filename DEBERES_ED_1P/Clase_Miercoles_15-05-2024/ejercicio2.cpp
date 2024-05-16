//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Crea una lambda que capture una variable externa por referencia y modifique su valor.
//Fecha Creacion: 15-05-2024
//Fecha Modificacion: 15-05-2024

#include <iostream>

using namespace std;

int main() {
    int x = 10;

    auto modificar = [&x]() {
        x += 5;
    };

    cout << "Antes de la funcion: " << x << endl;
    modificar();
    cout << "Después de la funcion: " << x << endl;

    return 0;
}