//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Sobrecarga de operador +
//Fecha Creacion: 17-05-2024
//Fecha Modificacion: 17-05-2024

#include <iostream>

class Vector {
private:
    int x, y;
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    Vector operator+(const Vector& v) const {
        return Vector(x + v.x, y + v.y);
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);
    Vector v3 = v1 + v2;

    v3.print(); 
    return 0;
}
