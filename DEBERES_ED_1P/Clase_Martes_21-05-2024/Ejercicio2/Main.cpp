/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Identificar pares
Fecha Creacion: 21-05-2024
Fecha Modificacion: 21-05-2024
*/
#include <iostream>

int main() {
    auto esPar = [](int n) { return n % 2 == 0; };
    std::cout << "10 es par: " << esPar(10) << std::endl;
    std::cout << "7 es par: " << esPar(7) << std::endl;
    return 0;
}
