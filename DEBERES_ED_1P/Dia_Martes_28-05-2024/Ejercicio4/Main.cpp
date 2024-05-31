/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Maximo elemento de una lista
Fecha Creacion: 28-05-2024
Fecha Modificacion: 28-05-2024
*/
#include "Maximo.cpp"
#include <iostream>

int main(){
    Lista list;
    list.insertarFin(1000);
    list.insertarFin(411);
    list.insertarFin(99);
    list.insertarFin(1);
    list.insertarFin(999);
    list.insertarFin(1005);
    
    std :: cout<<"Lista: " << std:: endl;
    list.mostrar();


    int max= list.elementoMax();

    std :: cout<<"El elemento maximo de la liste es: " << max << std:: endl;
    return 0;
}