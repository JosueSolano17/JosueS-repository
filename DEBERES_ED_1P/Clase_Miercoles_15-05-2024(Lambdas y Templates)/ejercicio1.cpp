//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Obtener el valor donde almacene dos valores de cualquier tipo y proporcione métodos para obtener estos valores.
//Fecha Creacion: 15-05-2024
//Fecha Modificacion: 15-05-2024
#include<iostream>

using namespace std;

template<typename T1, typename T2>
class Pareja {
private:
    T1 primero;
    T2 segundo;
public:
    Pareja(T1 a, T2 b) : primero(a), segundo(b) {}
    T1 obtenerPrim() const { return primero; }
    T2 obtenerSeg() const { return segundo; }
};

int main(){
    Pareja <int, double> p(3, 4.5);
    cout << "Primero: " << p.obtenerPrim() << ", Segundo: " << p.obtenerSeg() <<endl;
    
    Pareja <string, char> p2("Hola", 'A');
    cout << "Primero: " << p2.obtenerPrim() << ", Segundo: " << p2.obtenerSeg() << endl;
    
    return 0;
}