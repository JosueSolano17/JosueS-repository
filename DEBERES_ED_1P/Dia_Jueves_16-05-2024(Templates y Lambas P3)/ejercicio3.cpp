//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Funcion que divide dos valores
//Fecha Creacion: 16-05-2024
//Fecha Modificacion: 16-05-2024

#include <iostream>
#include<functional>

using namespace std;


template <class TYPE>
TYPE Oper(TYPE a, TYPE b, function<TYPE(TYPE , TYPE)>oper){
    return oper(a,b);
}


int main(){

    cout<<Oper<int>(40,10,[](int a, int b){
        return a/b;
    })<< endl;
}