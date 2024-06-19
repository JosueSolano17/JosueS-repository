/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Lambda para sumar numeros
Fecha Creacion: 21-05-2024
Fecha Modificacion: 21-05-2024
*/
#include <iostream>

int main() {
    auto suma = [](int a, int b) { return a + b; };
    std::cout << "Suma de 5 y 3: " << suma(5, 3) << std::endl;
    return 0;
}
