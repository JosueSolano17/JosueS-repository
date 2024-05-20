#include "Sobrecarga.cpp"
#include <iostream>

using namespace std;

int main(){

    Sobrecarga F1,F2,result;
    cout<< "Ingrese la primera fraccion " << endl;
    F1.in();
    cout<< "Ingrese la segunda fraccion " << endl;
    F2.in();
    result = F1-F2;
    result.out();
    return 0;

}
