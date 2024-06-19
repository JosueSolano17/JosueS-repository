/***********************************************************************
 * Module:  Nodo.h
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:58:15
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/


#include <iostream>
#include <string>
#include "Empleado.h"


using namespace std;

class Nodo {
private:
    string Nombre1;
    string Nombre2;
    string Apellido;
    string Correo;
    string Cedula;
    Nodo* Siguiente;
    Nodo* Anterior;
    Empleado* empleado;
    string ID;
    
public:
    string getNombre2(void);
    void setNombre2(string newNombre2);
    Nodo(string N1,  string N2, string Ape,string Ced ,Nodo* S = nullptr, Nodo* A = nullptr);
    ~Nodo();
    string getNombre1(void);
    string getCorreo(void);
    void setNombre1(string newNombre1);
    void setCorreo(string newCorreo);
    string getApellido(void);
    void setApellido(string newApellido);
    Nodo* getSiguiente(void);
    void setSiguiente(Nodo* newSiguiente);
    Nodo* getAnterior(void);
    void setAnterior(Nodo* newAnterior);
    string getCedula(void);
    void setCedula(string newCedula);
    Empleado* getEmpleado(void);
    void setEmpleado(Empleado* emp);
    string getID(void);
    void setID(string newID);

};


