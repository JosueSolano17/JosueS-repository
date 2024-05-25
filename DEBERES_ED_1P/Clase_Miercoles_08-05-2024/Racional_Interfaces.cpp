#include<iostream>
#include"Racional_Interfaces.h"

using namespace std;

int Suma_int(Racional r1, Racional r2){
    int a=r1.getNumerador(); 
    int b=r1.getDenominador();
    int c=r2.getNumerador();
    int d=r2.getDenominador();
    int numerador, denominador;

    if (b==d){
        numerador = a+c;
        denominador=d;
    } else{
        numerador=  a * d + c * b;
        denominador = b*d;
         
    }
    
     cout << "Numerador: " << numerador << ", Denominador: " << denominador << endl;
     cout << numerador << endl;
     cout << "----" << endl;
     cout << denominador << endl;

     return numerador + denominador;

}