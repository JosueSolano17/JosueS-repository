//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Función lambda que suma dos valores
//Fecha Creacion: 16-05-2024
//Fecha Modificacion: 16-05-2024

#include <iostream>
#include <functional>

int main() {

    auto suma = [](int a, int b) -> int {
        return a + b;
    };

    int resultado = suma(5, 3);

    std::cout << "La suma de 5 y 3 es: " << resultado << std::endl;

    return 0;
}
