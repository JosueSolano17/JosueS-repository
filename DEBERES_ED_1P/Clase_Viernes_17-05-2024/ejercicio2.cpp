//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Sobrecarga de operador ++
//Fecha Creacion: 17-05-2024
//Fecha Modificacion: 17-05-2024

#include <iostream>

class Incremento {
private:
    int count;
public:
    Incremento(int count = 0) : count(count) {}

    Incremento operator++(int) {
        Incremento temp = *this;
        ++count;
        return temp;
    }

    void print() const {
        std::cout << "Aumento: " << count << std::endl;
    }
};

int main() {
    Incremento c(5);

    c++;
    c.print(); 

    return 0;
}
