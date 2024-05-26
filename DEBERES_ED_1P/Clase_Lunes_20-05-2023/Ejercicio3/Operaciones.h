#include <vector>
#include <functional>

using namespace std;

template<typename T>
class Operador {
public:
    Operador(const vector<T>& elementos, function<T(T, T)> operacion) 
        : elementos(elementos), operacion(operacion) {}

    T operar() const;

private:
    vector<T> elementos;
    function<T(T, T)> operacion;
};