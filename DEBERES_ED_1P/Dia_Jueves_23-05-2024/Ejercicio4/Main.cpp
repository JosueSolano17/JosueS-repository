#include "SumaN.cpp"
#include <iostream>

using namespace std;

int main(){

    int num;

    cout<<"Ingrese el numero a sumar: "<< endl; 
    cin >> num;

    int resultado = sumaN(num);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}