#include "Fecha.cpp"
#include <iostream>

using namespace std;

int main(){
    Fecha F1,F2;
    cout<<"Ingresar la primera fecha: (Formato: dd mm aaaa)"<<endl;
    F1.leer();
    cout<<"Ingresar la segunda fecha: (Formato: dd mm aaaa)"<<endl;
    F2.leer();
    int result= F1-F2;
    cout << "La diferencia en días entre las dos fechas es: " << result << " días" << endl;

}