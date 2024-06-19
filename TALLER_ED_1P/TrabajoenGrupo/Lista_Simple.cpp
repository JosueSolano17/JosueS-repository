/***********************************************************************
 * Module:  Lista_Simple.cpp
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:54:14
 * Purpose: Implementation of the class Lista_Simple
 ***********************************************************************/

#include "Lista_Simple.h"
#include "Empleado.h"
#include <iostream>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <iomanip>

using namespace std;

Lista_Simple::Lista_Simple() : cabeza(nullptr), cola(nullptr) {}

Lista_Simple::~Lista_Simple() {
    while (cabeza != nullptr) {
        Nodo* temp = cabeza;
        cabeza = cabeza->getSiguiente();
        delete temp;
    }
}



void Lista_Simple::Insertar(string& N1, string& N2, string& Ape,string& Ced, int count) {
    string dominio = "espe.edu.ec";
    Nodo* nuevoNodo = new Nodo(N1, N2, Ape, Ced);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        cola = nuevoNodo;
    } else {
        cola->setSiguiente(nuevoNodo);
        nuevoNodo->setAnterior(cola);
        cola = nuevoNodo;
    }
    Comprobar_existencia(N1, N2, Ape,count, nuevoNodo);

    string password = generarContrasenia(nuevoNodo);
    cout << "Contraseña generada: " << password << endl;

    string correo = crearCorreo(N1,N2,Ape,count,dominio);
    cout << "Correo generado: " << correo << endl;

    string id = crearID();
    cout << "ID generado: " << id << endl;
    nuevoNodo->setID(id);
    Empleado* emp = new Empleado(id, 0.0);
    nuevoNodo->setEmpleado(emp);
    guardarArchivo("C:\\Users\\Usuario\\Pictures\\xd\\list.txt");
}


void Lista_Simple::Comprobar_existencia(string& N1, string& N2, string& Ape, int count, Nodo* nodo) {
    count = -1;
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        if (actual->getNombre1() == N1 && actual->getNombre2() == N2 && actual->getApellido() == Ape) {
            count++;
        }
        actual = actual->getSiguiente();
    }

    string correo = crearCorreo(N1, N2, Ape, count, "espe.edu.ec");
    nodo->setCorreo(correo);
}

string Lista_Simple::crearCorreo(string& N1, string& N2, string& Ape, int count, string dominio) {
    if (N1.empty() || N2.empty() || Ape.empty()) {
        cerr << "Error: Los nombres y el apellido no deben estar vacíos" << endl;
    }

    char inicialN1 = tolower(N1[0]);
    char inicialN2 = tolower(N2[0]);

    string apellidoMinusculas = Ape;
    transform(apellidoMinusculas.begin(), apellidoMinusculas.end(), apellidoMinusculas.begin(), ::tolower);
    string correo;
    if (count <= 0) {
        correo = string(1, inicialN1) + string(1, inicialN2) + apellidoMinusculas + "@" + dominio;
    } else {
        correo = string(1, inicialN1) + string(1, inicialN2) + apellidoMinusculas + to_string(count) + "@" + dominio;
    }
    
    return correo;
}

void Lista_Simple::Eliminar(string& N1, string& N2, string& Ape) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getNombre1() == N1 && actual->getNombre2() == N2 && actual->getApellido() == Ape) {
            if (actual->getAnterior() != nullptr) {
                actual->getAnterior()->setSiguiente(actual->getSiguiente());
            } else {
                cabeza = actual->getSiguiente();
            }
            if (actual->getSiguiente() != nullptr) {
                actual->getSiguiente()->setAnterior(actual->getAnterior());
            } else {
                cola = actual->getAnterior();
            }
            delete actual;
            cout << "Nodo eliminado" << endl;
            cout << "Correo del nodo eliminado: "  << endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Nodo no encontrado para eliminar" << endl;
}

void Lista_Simple :: Buscar(string& N1, string& N2, string& Ape, string& Ced){
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getNombre1() == N1 && actual->getNombre2() == N2  &&  actual->getApellido()==Ape) {
            cout << "Nodo encontrado:\n" << "N1 = " << actual->getNombre1() 
            << ", \nNombre2 = " << actual->getNombre2()
            << ", \nApellido = " << actual->getApellido() 
            << ", Correo = "<<actual->getCorreo()
            << ", Cedula = " << actual->getCedula()
            <<endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Nodo no encontrado" << endl;
}


void Lista_Simple::guardarArchivo(const string& nombreArchivo) const {
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        cerr << "Error al abrir el archivo: " << nombreArchivo << endl;
        return;
    }

    Nodo* actual = cabeza;
    while (actual != nullptr) {
        archivo << "Nombre1: " << actual->getNombre1() 
                << ", Nombre2: " << actual->getNombre2() 
                << ", Apellido: " << actual->getApellido() 
                << ", Correo: " << actual->getCorreo()
                << ", Cedula: " << actual->getCedula();
        
        Empleado* emp = actual->getEmpleado();
        if (emp != nullptr) {
            archivo << ", ID Empleado: " << emp->getID()
                    << ", Sueldo: " << emp->getSueldo();
        } else {
            archivo << ", Empleado no asignado";
        }
        archivo << endl;

        actual = actual->getSiguiente();
    }

    archivo.close();
    cout << "Datos guardados en el archivo: " << nombreArchivo << endl;
}




void Lista_Simple::Mostrar() {
    Nodo* actual = cabeza;

    while (actual != nullptr) {
        cout << "Nombre1: " << actual->getNombre1() << endl;
        cout << "Nombre2: " << actual->getNombre2() << endl;
        cout << "Apellido: " << actual->getApellido() << endl;
        cout << "Correo: " << actual->getCorreo() << endl;
        cout << "Cedula: " << actual->getCedula() << endl;

        Empleado* emp = actual->getEmpleado();
        if (emp != nullptr) {
            cout << "ID Empleado: " << emp->getID() << endl;
            cout << "Sueldo: " << emp->getSueldo() << endl;
        } else {
            cout << "Empleado no asignado." << endl;
        }

        cout << "--------------------------" << endl;

        actual = actual->getSiguiente();
    }
}

bool Lista_Simple:: validarCedula(string &cedula) {
   if (cedula.length() != 10) {
        return false;
    }

    for (char c : cedula) {
        if (!isdigit(c)) {
            cout<<"Ingrese solo numeros";
            return false;
        }
    }

    int suma = 0;
    for (int i = 0; i < 9; i++) {
        int digito = cedula[i] - '0';
        if (i % 2 == 0) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;
            }
        }
        suma += digito;
    }

    int digitoVerificador = cedula[9] - '0';
    int resultado = 10 - (suma % 10);
    if (resultado == 10) {
        resultado = 0;
    }

    return digitoVerificador == resultado;
}

bool Lista_Simple :: validarNombre(string& nombre){
    for (char c : nombre) {
        if (isdigit(c)) {
            return false;
        }
    }
    return true;
}

string Lista_Simple :: generarContrasenia(Nodo* cabeza){
    string N1 = cabeza ->getNombre1();
    string N2 = cabeza->getNombre2();
    string Ape = cabeza->getApellido();

    char letraApe = tolower(Ape.back());
    char letraN1 = tolower(N1.front()); 
    char letraN2 = tolower(N2.back());
  
    string apellidoInvertido = Ape.substr(0,Ape.length()-1);
    reverse(apellidoInvertido.begin(), apellidoInvertido.end()); 
    string contrasenia = string(1,letraApe) + letraN1 + letraN2 + apellidoInvertido; 
    cout << "Contrasenia sin Encriptar: " << contrasenia << endl;
    contrasenia = encriptar(contrasenia);

    return contrasenia;
}

string Lista_Simple :: encriptar(string& contrasenia){
    string contraseniaEncriptada = contrasenia;
        int desplazamiento = 2;
        for (char& c : contraseniaEncriptada) {
            if (isalpha(c)) {
                char base = isupper(c) ? 'A' : 'a';
                c = ((c - base + desplazamiento) % 26) + base;
            }
        }
        return contraseniaEncriptada;
}

void Lista_Simple::ingresarSueldo(string& Ced, double Sueldo) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getCedula() == Ced) {
            Empleado* empleado = actual->getEmpleado();
            if (empleado == nullptr) {  
                empleado = new Empleado(actual->getID(), Sueldo);
                actual->setEmpleado(empleado); // Asignar el empleado al nodo
            } else {
                empleado->setSueldo(Sueldo);
            }
            cout << "Sueldo asignado a " << actual->getNombre1() << " " << actual->getApellido() << ": " << Sueldo << endl;
             guardarArchivo("C:\\Users\\Usuario\\Pictures\\xd\\list.txt");
            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Empleado con cedula " << Ced << " no encontrado." << endl;
   
}



string Lista_Simple :: crearID(){
    string constante = "ESPE-";
    int contador;
    contador++;
    stringstream ss;
    ss << constante << setfill('0') << setw(3) << contador;
    return ss.str();
}