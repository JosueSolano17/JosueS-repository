/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Ordenar una Lista
Fecha Creacion: 27-05-2024
Fecha Modificacion: 27-05-2024
*/
#include "UnirLista.cpp"

using namespace std; 

int main() {
    Lista lista1;
    lista1.insertarFin(1);
    lista1.insertarFin(2);
    lista1.insertarFin(3);

    Lista lista2;
    lista2.insertarFin(4);
    lista2.insertarFin(5);
    lista2.insertarFin(6);

    cout << "Lista 1:" << endl;
    lista1.mostrar();
    cout << "Lista 2:" << endl;
    lista2.mostrar();

    lista1.unir(lista2);

    cout << "Lista combinada:" << endl;
    lista1.mostrar();
    return 0;
}
