#include <iostream>

using namespace std;

template <typename T>
T maximo(T a, T b){

    return (a>b ? a:b);
    
}


int main(){

    int num_max = maximo(211,40);
    double deci_max = maximo(80.21,80.22);
    char letras = maximo('a', 'z');

    std::cout << "El máximo es: " << num_max << std::endl;
    std::cout << "El máximo es: " << deci_max << std::endl;
    std::cout << "El máximo es: " << letras << std::endl;

    return 0;
}