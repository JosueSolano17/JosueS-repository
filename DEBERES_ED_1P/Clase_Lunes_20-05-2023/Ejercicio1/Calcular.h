#include <functional>

using namespace std;

template <typename T>
class Calcular {
public:
    Calcular(T a, T b);

    T suma() const;
    T resta() const;

    T operacionPersonalizada(function<T(T, T)> operacion) const;

private:
    T a;
    T b;
};

