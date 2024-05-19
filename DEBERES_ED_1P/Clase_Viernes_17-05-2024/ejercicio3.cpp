//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Sobrecarga de operador -
//Fecha Creacion: 17-05-2024
//Fecha Modificacion: 17-05-2024

#include <iostream>

class Resta {
private:
    int valor;
public:
    Resta(int valor = 0) : valor(valor) {}

    Resta operator-(const Resta& n) const {
        return Resta(valor - n.valor);
    }

    void print() const {
        std::cout << valor << std::endl;
    }
};

int main() {
    Resta n1(10);
    Resta n2(3);
    Resta n3 = n1 - n2;

    n3.print(); 
    return 0;
}
