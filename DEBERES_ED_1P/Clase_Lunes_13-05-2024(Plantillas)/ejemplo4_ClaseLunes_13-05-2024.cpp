#include <iostream>
#include<functional>

using namespace std;


template <class TYPE>
TYPE Oper(TYPE a, TYPE b, function<TYPE(TYPE , TYPE)>oper){
    return oper(a,b);
}


int main(){

    cout<<Oper<int>(40,12,[](int a, int b){
        return a*b;
    })<< endl;
}