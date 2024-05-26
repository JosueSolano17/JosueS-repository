#include <vector>
#include <functional>

using namespace std;

template<typename T>
class Restador {
public:
    Restador(const vector<T>& elementos, function<T(T, T)> operacion) 
        : elementos(elementos), operacion(operacion) {}

    T restar() const;

private:
    vector<T> elementos;
    function<T(T, T)> operacion;
};