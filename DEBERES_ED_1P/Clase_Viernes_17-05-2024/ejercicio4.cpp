//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Sobrecarga de operador /
//Fecha Creacion: 17-05-2024
//Fecha Modificacion: 17-05-2024

#include <iostream>
#include <stdexcept>

class Numero {
private:
    int valor;
public:

    Numero(int valor = 0) : valor(valor) {}


    Numero operator/(const Numero& otro) const {
        if (otro.valor == 0) {
            throw std::invalid_argument("División por cero, no existe");
        }
        return Numero(valor / otro.valor);
    }

    void imprimir() const {
        std::cout << valor << std::endl;
    }
};

int main() {
    try {
        Numero n1(10);
        Numero n2(2);
        Numero n3 = n1 / n2;

        n3.imprimir(); 

        Numero n4(0);
        Numero n5 = n1 / n4;
        n5.imprimir();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

