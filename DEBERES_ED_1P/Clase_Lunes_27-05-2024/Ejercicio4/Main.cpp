/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Eliminar Duplicados Lista
Fecha Creacion: 27-05-2024
Fecha Modificacion: 27-05-2024
*/
#include "Eliminar.cpp"

using namespace std;

int main() {
    Lista lista;
    lista.insertarFin(1);
    lista.insertarFin(2);
    lista.insertarFin(4);
    lista.insertarFin(1);
    lista.insertarFin(2);

    cout << "Lista original:" << endl;
    lista.mostrar();

    lista.eliminar();

    cout << "Lista sin duplicados:" << endl;
    lista.mostrar();

    return 0;
}
