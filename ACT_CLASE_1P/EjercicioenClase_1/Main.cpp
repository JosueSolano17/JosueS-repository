#include "Frac.cpp"
#include <iostream>

using namespace std;

int main(){
    Frac F1,F2,result;
    cout<<"Ingresar la primera fraccion: "<<endl;
    F1.in();
    cout<<"Ingresar la segunda fraccion: "<<endl;
    F2.in();
    result= F1*F2;
    result.out();
    
}