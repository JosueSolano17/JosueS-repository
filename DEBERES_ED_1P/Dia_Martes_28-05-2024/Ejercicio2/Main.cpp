/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Encontrar elemento Medio
Fecha Creacion: 28-05-2024
Fecha Modificacion: 28-05-2024
*/
#include "Medio.cpp"
#include <iostream>

int main(){
    Lista list;
    list.insertarFin(1);
    list.insertarFin(3);
    list.insertarFin(5);
    list.insertarFin(7);
    list.insertarFin(9);

    std ::cout<<"Lista Original:"<< std:: endl;
    list.mostrar();

    int elementoMedio = list.elementoMedio();
    std ::cout<<"Elemento medio de la lista es: "<< elementoMedio << std:: endl;

    return 0;
}