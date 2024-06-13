/***********************************************************************
 * Module:  Lista_Simple.h
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:54:14
 * Purpose: Declaration of the class Lista_Simple
 ***********************************************************************/

#include "Nodo.cpp"
#include <string>
#include <algorithm>
#include <cctype>

class Lista_Simple {
public:
    Lista_Simple();
    ~Lista_Simple();

    void Insertar(string& N1, string& N2, string& Ape,string& Ced,int count);
    void Eliminar(string& N1, string& N2, string& Ape);
    void Buscar(string& N1, string& N2, string& Ape, string& Ced);
    void Comprobar_existencia(string& N1, string& N2, string& Ape, int count, Nodo* nodo);
    string crearCorreo(string& N1, string& N2, string& Ape,int count, string dominio = "espe.edu.ec");
    void guardarArchivo(const string& nombreArchivo)const;
    void Mostrar() const;
    bool validarCedula(string& Ced);
    bool validarNombre(string& nombre);
    string generarContrasenia(Nodo* cabeza);
    string encriptar(string& contrasenia);

private:
    Nodo* cabeza;
    Nodo* cola;    

};
