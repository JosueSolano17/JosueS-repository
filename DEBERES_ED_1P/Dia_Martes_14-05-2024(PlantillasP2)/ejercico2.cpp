#include <iostream>

using namespace std;

template <typename T>

void intercambiar(T& a, T& b) {
    T equals = a;
    a = b;
    b = equals;
}

int main(){

    int num1 = 100;
    int num2 = 3;

    std::cout<<"El valor de los numeros sin el intercambio son" <<endl;
    std::cout << "Numero 1 : " << num1 << " ------ Numero 2 : " << num2 << endl;

    intercambiar(num1, num2);

    std::cout << "Después del intercambio:" << std::endl;
    std::cout << "Numero 1 : " << num1 << " ------ Numero 2 : " << num2 <<endl;

    return 0;

}