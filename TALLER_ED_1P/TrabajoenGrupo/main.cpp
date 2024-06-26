#include "Lista_Simple.cpp"
#include <iostream>
#include <string>

using namespace std;

int menu() {
    int opcion;
    cout << "\n--- Menú ---" << endl;
    cout << "1. Insertar Nodo" << endl;
    cout << "2. Eliminar Nodo" << endl;
    cout << "3. Buscar Nodo" << endl;
    cout << "4. Ingresar Sueldo" << endl;
    cout << "5. Guardar en Archivo" << endl;
    cout << "6. Mostrar Lista" << endl;
    cout << "7. Salir" << endl;
    cout << "Ingrese su opción: ";

    while (!(cin >> opcion)) {
        cout << "Opción inválida. Por favor, ingrese un número: ";
        cin.clear();
    }

    return opcion;
}

int main() {
    Lista_Simple lista;
    int count=0;
    

    int opcion;
    do {
        opcion = menu();

        switch (opcion) {
            case 1: {
                string nombre1,nombre2,ape,ced;
                cout << "Ingrese el primer nombre del nuevo nodo: ";
                cin >> nombre1;
                while(lista.validarNombre(nombre1) == false){
                    cout << "Ingrese solo letras: ";
                    cin >> nombre1;
                }
                cout << "Ingrese el segundo nombre del nuevo nodo: ";
                cin >> nombre2;
                while(lista.validarNombre(nombre2) == false){
                    cout << "Ingrese solo letras: ";
                    cin >> nombre2;
                }
                cout << "Ingrese el apellido del nuevo nodo: ";
                cin >> ape;
                while(lista.validarNombre(ape) == false){
                    cout << "Ingrese solo letras: ";
                    cin >> ape;
                }
                cout << "Ingrese la cedula del nuevo nodo: ";
                cin >> ced;
                while(lista.validarCedula(ced) == false){
                    cout << "Ingrese una cedula valida: ";
                    cin >> ced;
               }
               lista.Insertar(nombre1,nombre2,ape,ced,count);
                break;
            }
            case 2: {
                string nombre1,nombre2,ape;
                cout << "Ingrese el primer nombre del nuevo nodo: ";
                cin >> nombre1;
                while(lista.validarNombre(nombre1) == false){
                    cout << "Ingrese solo letras: ";
                    cin >> nombre1;
                }
                cout << "Ingrese el segundo nombre del nuevo nodo: ";
                cin >> nombre2;
                while(lista.validarNombre(nombre2) == false){
                    cout << "Ingrese solo letras: ";
                    cin >> nombre2;
                }
                cout << "Ingrese el apellido del nuevo nodo: ";
                cin >> ape;
                while(lista.validarNombre(ape) == false){
                    cout << "Ingrese solo letras: ";
                    cin >> ape;
                }
                lista.Eliminar(nombre1, nombre2,ape);
                break;
            }
            
            case 3:{
                string nombre1,nombre2,ape,ced;
                cout << "Ingrese el primer nombre del nodo a buscar: ";
                cin >> nombre1;
                cout << "Ingrese el segundo nombre del nodo a buscar: ";
                cin >> nombre2;
                cout << "Ingrese el apellido del nodo a buscar: ";
                cin >> ape;
                cout << "Ingrese la cedula a buscar: ";
                cin >> ced;
                while(lista.validarCedula(ced) == false){
                    cout << "Ingrese una cedula valida: ";
                    cin >> ced;
               }
                lista.Buscar(nombre1, nombre2, ape, ced);
                break;
            }

            case 4:{
                string ced;
                double sueldo;
                cout << "Ingrese la cedula del empleado: ";
                cin >> ced;
                while(lista.validarCedula(ced) == false){
                    cout << "Ingrese una cedula valida: ";
                    cin >> ced;
                }
                cout << "Ingrese Sueldo: ";
                cin >> sueldo;
                lista.ingresarSueldo(ced,sueldo);
                break;
            }            
            
            case 5:
                lista.guardarArchivo("C:\\Users\\DELL\\Desktop\\Estructura_de_Datos\\TALLER_ED_1P\\list.txt");
                break;
            case 6:
                cout << "Lista actual: ";
                lista.Mostrar();
                break;
            case 7:
            cout << "Saliendo del programa...." << endl;
            break;
        }
    } while (opcion != 7);

    return 0;
}
