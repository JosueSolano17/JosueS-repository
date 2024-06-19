/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Calcular el factorial
Fecha Creacion: 21-05-2024
Fecha Modificacion: 21-05-2024
*/
#include <iostream>
#include <functional>

int main() {
    std::function<int(int)> factorial = [&factorial](int n) {
        return (n <= 1) ? 1 : n * factorial(n - 1);
    };

    std::cout << "Factorial de 5: " << factorial(5) << std::endl;
    return 0;
}
